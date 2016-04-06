/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 16:01:53 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:32:39 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# define offsetof(type, member) ((size_t)&((type *)0)->member)

# define list_entry(ptr, type, member) ({						\
			const t_list	*__mptr = (ptr);					\
			(type *)((char *)__mptr - offsetof(type, member)); })

# define list_first_entry(ptr, type, member)	\
	list_entry((ptr)->next, type, member)

# define list_last_entry(ptr, type, member)		\
	list_entry((ptr)->prev, type, member)

# define list_first_entry_or_null(ptr, type, member)				\
	(!list_empty(ptr) ? list_first_entry(ptr, type, member) : NULL)

typedef struct s_list	t_list;

struct					s_list
{
	t_list				*next;
	t_list				*prev;
};

void					init_list(t_list *list);

void					list_add(t_list *new, t_list *head);
void					list_add_tail(t_list *new, t_list *head);

void					list_del(t_list *entry);
void					list_del_init(t_list *entry);

int						list_empty(const t_list *list);
int						list_is_last(const t_list *list,
									const t_list *head);
int						list_is_singular(const t_list *head);

void					private_list_add(t_list *new, t_list *prev,
										t_list *next);

void					private_list_del(t_list *prev, t_list *next);
void					private_list_del_entry(t_list *entry);

#endif
