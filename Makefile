NAME = bureaucrat3

SRCS = main.cpp \
Bureaucrat.cpp \
AForm.cpp \
PresidentialPardonForm.cpp \
RobotomyRequestForm.cpp \
ShrubberyCreationForm.cpp \
Intern.cpp \

CXX = c++

MY_OBJECTS = $(SRCS:.cpp=.o)

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.c.o:
	$(CXX) $(CXXFLAGS) $< -o $(<:.cpp=.o)

$(NAME): $(MY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(MY_OBJECTS) -o $(NAME)

debug: $(MY_OBJECTS)
	$(CXX) $(CXXFLAGS) $(MY_OBJECTS) -o $(NAME)

RM=rm -f

clean:
	$(RM) $(MY_OBJECTS)

fclean: clean
	${RM} ${NAME}

re:	fclean all