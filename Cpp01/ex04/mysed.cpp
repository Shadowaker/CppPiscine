#include "mysed.hpp"

static std::string	getFile(std::string path)
{
	std::ifstream	f;
	std::string		buff;
	std::string		res;

	f.open(path);
	if (!f)
	{
		std::cout << "No such file";
		res = "";
	}
	else
	{
		while (std::getline(f, buff))
		{
			if (f.eof())
				break;
			res += buff;
			res += "\n";
		}
		res += buff;
	}
	f.close();
	return (res);
}

static std::string	freplace(std::string str, std::string src, std::string pst)
{
	std::string	res;
	std::string buff;

	for (int x=0; x < str.size(); x++)
	{
		if (str[x] == src[0])
		{
			buff = str.substr(x, src.size());
			if (!buff.compare(src))
			{
				res += pst;
				x += src.size() - 1;
			}
		}
		else
			res += str[x];
	}
	return (res);
}

static int	putFile(std::string path, std::string str)
{
	std::ofstream out;

	out.open(path);
	if (!out)
		return (1);
	out << str;
	out.close();
	return (0);
}

int mySed(std::string path, std::string s1, std::string s2)
{
	std::string	res;

	res = getFile(path);

	if (res != "")
		res = freplace(res, s1, s2);
	else
		return (1);

	putFile(path.append(".replace"), res);
	std::cout << "Done";
	return (0);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Not enough params";
	else
		mySed(argv[1], argv[2], argv[3]);

	std::cout << std::endl;
	return (0);
}
