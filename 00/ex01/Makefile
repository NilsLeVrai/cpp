NAME = PhoneBook
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Werror -Wextra

INCLUDES = -I ./includes/

SRC_DIR = .
BIN_DIR = ./bin

SOURCES =  main.cpp \
			Contact/Contact.cpp \
			PhoneBook/PhoneBook.cpp

OBJECTS = $(addprefix $(BIN_DIR)/,$(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

$(BIN_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CXX) $(CXXFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re