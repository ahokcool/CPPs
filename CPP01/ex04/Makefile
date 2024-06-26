NAME=SedIsForLosers

# Compiler options
CC = c++
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf

# Colors
RED    = 	"\033[0;31m"
GREEN  = 	"\033[0;32m"
ORANGE = 	"\033[0;33m"
BLUE   = 	"\033[0;34m"
RESET  = 	"\033[0m"

# Folders
OBJ_FOLDER     	= ./obj/

# Files
GITPUSH = ../../git_push.sh
SRCS = main.cpp

# Object files
OBJS = $(SRCS:%.cpp=$(OBJ_FOLDER)%.o)

#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#

# Targets
.PHONY: all clean fclean re MSG_START MSG_DONE gp run1 run2 run3 run4 val test

all: MSG_START $(NAME) MSG_DONE

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJ_FOLDER)%.o: %.cpp
	@mkdir -p $(@D)
	@echo -n $(GREEN).$(RESET)
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FOLDER)
	@$(RM)  ./files/*.replace
	@echo $(RED) $(NAME) "removed object files" $(RESET)

fclean: clean
	@$(RM) $(NAME)
	@echo $(RED) $(NAME) "removed program" $(RESET)

re: fclean all

run1: re
	@echo $(BLUE) $(NAME) "starting..." $(RESET)
	@./$(NAME) ./files/test1.txt "Hello" "Oye"

run2: re
	@echo $(BLUE) $(NAME) "starting with empty replace string..." $(RESET)
	@./$(NAME) ./files/test1.txt "" "Oye"

run3: re
	@echo $(BLUE) $(NAME) "starting with empty replace string..." $(RESET)
	@./$(NAME) ./files/testDOESNTexists.txt "Hello" "Oye"

run4: re
	@echo $(BLUE) $(NAME) "starting with wrong arguments..." $(RESET)
	@./$(NAME) ./files/testDOESNTexists.txt "Hello"

val: re
	@echo $(BLUE) $(NAME) "starting with valgrind..." $(RESET)
	@valgrind --leak-check=full ./$(NAME) ./files/test1.txt "Hello" "Oye"

MSG_START:
	@echo $(ORANGE) $(NAME) "compiling" $(RESET)

MSG_DONE:
	@echo $(GREEN) $(NAME) "compiled" $(RESET)

gp: fclean
	@echo -n "Enter a commit message: $(NAME): " && \
	read COMMIT_MSG && \
	$(GITPUSH) "$(NAME): $$COMMIT_MSG"