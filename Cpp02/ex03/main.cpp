#include "Point.hpp"

int main()
{
	Point p = Point(1, 1);
	Point q = Point(4, 2);
	Point r = Point(2, 5);

	std::cout << "Triangle with points: " << std::endl;
	std::cout << "P (" << p.getX() << " ; " << p.getY() << ")" << std::endl;
	std::cout << "Q (" << q.getX() << " ; " << q.getY() << ")" << std::endl;
	std::cout << "R (" << r.getX() << " ; " << r.getY() << ")\n" << std::endl;
	Point in = Point(3, 2);
	Point out = Point(1, 3);

	std::cout << "The point X (" << in.getX() << " : " << in.getY() << ") is ";
	bsp(p, q, r, in) ? std::cout << "in." << std::endl : std::cout << "out.\n" << std::endl;

	std::cout << "The point Y (" << out.getX() << " : " << out.getY() << ") is ";
	bsp(p, q, r, out) ? std::cout << "in." << std::endl : std::cout << "out." << std::endl;
}
