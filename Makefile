# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sphone <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/06 19:48:53 by sphone            #+#    #+#              #
#    Updated: 2020/02/29 14:48:03 by olegolszewski    ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

INCLUDES = -I includes/

O_DIR = objects/
SRC_DIR = src/

HEADER_FILES_NAMES = fillit.h
HEADER_FILES = $(addprefix includes/, $(HEADER_FILES_NAMES))

SRC_FILES = \
src/assemply.c \
src/charly.c \
src/createplace.c \
src/errors.c \
src/freeall.c \
src/freefigures.c \
src/main.c \
src/place.c \
src/preshift.c \
src/presoft.c \
src/print.c \
src/ready.c \
src/selection.c \
src/sequencecreate.c \
src/shiftpole.c \
src/tru.c

O_FILES = $(patsubst $(SRC_DIR)%.c, $(O_DIR)%.o, $(SRC_FILES))

SRC_DIRS = $(shell find $(SRC_DIR) -type d)
O_DIRS = $(patsubst $(SRC_DIR)%, $(O_DIR)%, $(SRC_DIRS))

.PHONY: clean fclean all

all: $(NAME)

$(NAME): $(O_DIRS) $(O_FILES)
	clang $(FLAGS) -o $(NAME) $(O_FILES) $(INCLUDES)

$(O_DIRS):
	@mkdir -vp $(O_DIRS)

$(O_DIR)%.o: $(SRC_DIR)%.c ${HEADER_FILES}
	clang -c $(FLAGS) $(INCLUDES) -o $@ $<

clean:
	@rm -rf $(O_DIR)
	@echo "make: Done clean of \`$(NAME)'."

fclean: clean
	rm -f $(NAME)
	@echo "make: Done full clean of \`$(NAME)'."

re: fclean all
	@echo "make: Done recompile of \`$(NAME)'."

