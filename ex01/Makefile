NAME = a.out
SOURCES = main.cpp Brain.cpp Animal.cpp Dog.cpp Cat.cpp
INCLUDES = Brain.hpp Animal.hpp Dog.hpp Cat.hpp

OBJS = $(addprefix $(OBJ_DIR)/, $(SOURCES:.cpp=.o))
SRCS = $(addprefix $(SRC_DIR)/, $(SOURCES))
INCS = $(addprefix $(INC_DIR)/, $(INCLUDES))

SRC_DIR = .
OBJ_DIR = objs
INC_DIR = .

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -I $(INC_DIR)

all : $(NAME)

fclean : 
	rm -rf $(OBJ_DIR)
	rm -rf $(NAME)

re :
	make fclean
	make all

$(NAME) : $(OBJS) $(INCS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I $(INC_DIR) -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR) : 
	mkdir $@
