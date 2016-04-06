#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/01 18:43:51 by niccheva          #+#    #+#              #
#    Updated: 2016/04/06 09:20:11 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME	=	liblist.a

CC		=	cc

FLAGS	=	-Wall -Wextra -Werror

DSRC	=	./sources/

DOBJ	=	./objects/

DINC	=	./includes/

DFTINC	=	../libft/includes/

SRC		=	init_list.c							\
			list_add.c							\
			list_add_tail.c						\
			list_del.c							\
			list_del_init.c						\
			list_empty.c						\
			list_is_last.c						\
			list_is_singular.c					\
			private_list_add.c					\
			private_list_del.c					\
			private_list_del_entry.c

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
