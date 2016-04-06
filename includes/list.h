/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 16:01:53 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 23:52:34 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "libft.h"

# define offsetof(type, member) ((size_t)&((type *)0)->member)
# define list_entry(ptr, type, member) ({							\
			const t_list_head	*__mptr = (ptr);					\
			(type *)((char *)__mptr - offsetof(type, member)); })
# define list_first_entry(ptr, type, member)	\
	list_entry((ptr)->next, type, member)
# define list_last_entry(ptr, type, member)		\
	list_entry((ptr)->prev, type, member)
# define list_first_entry_or_null(ptr, type, member)				\
	(!list_empty(ptr) ? list_first_entry(ptr, type, member) : NULL)

typedef struct s_list_head	t_list_head;

struct						s_list_head
{
	t_list_head				*next;
	t_list_head				*prev;
};

void						_list_add(t_list_head *new, t_list_head *prev,
									t_list_head *next);
void						_list_cut_position(t_list_head *list,
											t_list_head *head,
											t_list_head *entry);
void						_list_del(t_list_head *prev, t_list_head *next);
void						_list_del_entry(t_list_head *entry);
void						_list_splice(const t_list_head *list,
										t_list_head *prev, t_list_head *next);

void						init_list_head(t_list_head *list);

void						list_add(t_list_head *new, t_list_head *head);
void						list_add_tail(t_list_head *new, t_list_head *head);

void						list_cut_position(t_list_head *list,
											t_list_head *head,
											t_list_head *entry);

void						list_del(t_list_head *entry);
void						list_del_init(t_list_head *entry);

BOOL						list_empty(const t_list_head *list);
BOOL						list_is_last(const t_list_head *list,
										const t_list_head *head);
BOOL						list_is_singular(const t_list_head *head);

void						list_move(t_list_head *list, t_list_head *head);
void						list_move_tail(t_list_head *list,
										t_list_head *head);

void						list_replace(t_list_head *old, t_list_head *new);
void						list_replace_init(t_list_head *old,
											t_list_head *new);

void						list_rotate_left(t_list_head *head);

void						list_splice(const t_list_head *list,
										t_list_head *head);
void						list_splice_init(t_list_head *list,
											t_list_head *head);
void						list_splice_tail(const t_list_head *list,
											t_list_head *head);
void						list_splice_tail_init(t_list_head *list,
												t_list_head *head);

#endif
