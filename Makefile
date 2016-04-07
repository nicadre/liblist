#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/01 18:43:51 by niccheva          #+#    #+#              #
#    Updated: 2016/04/07 10:01:29 by niccheva         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME		=	liblist.a

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

DSOURCES	=	./sources/

DOBJECTS	=	./objects/

INCLUDES	=	-I./includes/

SOURCES		=	init_list.c							\
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

OBJECTS		=	$(patsubst %.c, $(DOBJECTS)%.o, $(SOURCES))

DEPS		=	$(patsubst %.c, $(DOBJECTS)%.d, $(SOURCES))

DEPENDS		=	-MT $@ -MD -MP -MF $(subst .o,.d,$@)

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "\n\033[0;32m$(NAME) compiled:\t\033[0;m\c"
	ar rcs $(NAME) $(OBJECTS)

-include $(OBJECTS:.o=.d)

$(DOBJECTS)%.o: $(DSOURCES)%.c
	@mkdir -p $(DOBJECTS)
	@echo "\033[32m$< compiled:\t\033[0;m\c"
	$(CC) $(CFLAGS) $(DEPENDS) -o $@ -c $< $(INCLUDES)

clean:
	@rm -rf $(DOBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
