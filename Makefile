#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/01 18:43:51 by niccheva          #+#    #+#              #
#    Updated: 2016/03/27 18:35:02 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	liblist.a

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror

DSRC	=	./sources/

DOBJ	=	./objects/

DINC	=	./includes/

DFTINC	=	../libft/includes/

SRC		=	_list_add.c							\
			_list_cut_position.c				\
			_list_del.c							\
			_list_del_entry.c					\
			_list_splice.c						\
			init_list_head.c					\
			list_add.c							\
			list_add_tail.c						\
			list_cut_position.c					\
			list_del.c							\
			list_del_init.c						\
			list_empty.c						\
			list_is_last.c						\
			list_is_singular.c					\
			list_move.c							\
			list_move_tail.c					\
			list_replace.c						\
			list_replace_init.c					\
			list_rotate_left.c					\
			list_splice.c						\
			list_splice_init.c					\
			list_splice_tail.c					\
			list_splice_tail_init.c


OBJ		=	$(patsubst %.c, $(DOBJ)%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(NAME) $(OBJ)

$(DOBJ)%.o: $(DSRC)%.c
	@mkdir -p $(DOBJ)
	@echo "\033[32m$< compiled:\t\033[0;m\c"
	$(CC) -o $@ -c $< -I$(DINC) -I$(DFTINC)

clean:
	rm -f $(OBJ)
	@rm -rf $(DOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
