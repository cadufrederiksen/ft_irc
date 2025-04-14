NAME = ft_irc
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -Iinclude
OBJS_DIR = obj/
SRCS_DIR = src/

######## SRC

SRC_FILES = ft_irc

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF = $(OBJS_DIR)

all: $(NAME) $(OBJSF)

$(NAME): $(OBJS) $(OBJSF)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) 

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp | $(OBJSF)
	$(CC)  $(FLAGS) -c $< -o $@

$(OBJSF): 
	mkdir -p $(OBJS_DIR)

clean: 
	rm -fr $(OBJS_DIR)
	rm -fr $(OBJS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean all re fclean