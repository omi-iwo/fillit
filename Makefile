# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sphone <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 19:48:53 by sphone            #+#    #+#              #
#    Updated: 2020/02/06 11:13:28 by olegolszewski    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes/

O_DIR = objects/
SRC_DIR = src/

SRC_FILES = $(shell find $(SRC_DIR) -type f -name '*.c')
O_FILES = $(patsubst $(SRC_DIR)%.c, $(O_DIR)%.o, $(SRC_FILES))

SRC_DIRS = $(shell find $(SRC_DIR) -type d)
O_DIRS = $(patsubst $(SRC_DIR)%, $(O_DIR)%, $(SRC_DIRS))

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(O_DIRS) $(O_FILES)
	gcc $(FLAG S) -o $(NAME) $(O_FILES) $(INCLUDES)
	#gcc pi2.c -o fillit

$(O_DIRS):
	@mkdir -vp $(O_DIRS)

$(O_DIR)%.o: $(SRC_DIR)%.c
	clang -c $(FLAGS) $(INCLUDES) -o $@ $<

clean:
	@rm -rf $(O_DIR)
	@echo "make: Done clean of \`$(NAME)'."

fclean: clean
	rm -f $(NAME)
	@echo "make: Done full clean of \`$(NAME)'."

re: fclean all
	@echo "make: Done recompile of \`$(NAME)'."