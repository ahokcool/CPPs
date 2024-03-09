NAME=SedIsForLosers

# Compiler options
CC = c++
CFLAGS =  -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf

# Colors
RED    = 	\033[0;31m
GREEN  = 	\033[0;32m
ORANGE = 	\033[0;33m
BLUE   = 	\033[0;34m
RESET  = 	\033[0m

# Folders
OBJ_FOLDER     	= ./obj/

# Files
BANNER = ../../make_banner.sh
GITPUSH = ../../git_push.sh
SRCS = main.cpp

# Object files
OBJS = $(SRCS:%.cpp=$(OBJ_FOLDER)%.o)

#++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++#

# Targets
.PHONY: all clean fclean re MSG_START MSG_DONE gp run val test

all: MSG_START $(NAME) MSG_DONE

$(NAME): $(OBJS)
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

$(OBJ_FOLDER)%.o: %.cpp
	@mkdir -p $(@D)
	@echo -n "$(GREEN).$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ_FOLDER)
	@$(RM)  ./files/*.replace
	@$(BANNER) $(NAME) "removed object files" "$(RED)"

fclean: clean
	@$(RM) $(NAME)
	@$(BANNER) $(NAME) "removed program" "$(RED)"

re: fclean all

run: re
	@$(BANNER) $(NAME) starting... "$(BLUE)"
	@./$(NAME) ./files/test1.txt "Hello" "Oye"

val: re
	@$(BANNER) $(NAME) "starting with valgrind..." "$(BLUE)"
	@valgrind --leak-check=full ./$(NAME) ./files/test1.txt "Hello" "Oye"

MSG_START:
	@$(BANNER) $(NAME) compiling "$(ORANGE)"

MSG_DONE:
	@$(BANNER) $(NAME) compiled "$(GREEN)"

gp: fclean
	@echo -n "Enter a commit message: $(NAME): " && \
	read COMMIT_MSG && \
	$(GITPUSH) "$(NAME): $$COMMIT_MSG"