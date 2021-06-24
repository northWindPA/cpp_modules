NAME = Whatever

CPP = clang++ -Wall -Wextra -Werror

SRCS = $(shell find . -name "*.cpp")

OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	$(CPP) -o $@ -c $^

all: $(NAME)

$(NAME): $(OBJS)
	rm -rf $(NAME)
	$(CPP) $(OBJS) -o $(NAME)

debug:
	$(CPP) -g $(SRCS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(OBJS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
