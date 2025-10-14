NAME = Polymorphism

CXX = c++
# CXXFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =		main.cpp \
			Animal.cpp

OBJS = $(SRCS:.cpp=.o)

HEADERS =	Animal.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re