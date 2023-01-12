NAME = Form

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

RM = rm -f
CC = c++ -Wall -Wextra -Werror -std=c++98

%.o: %.c
	@$(CC) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "\033[92m$(NAME) compiled succesfully.\033[0m"

all: $(NAME)

re: fclean
	@make all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

.PHONY: all fclean clean
