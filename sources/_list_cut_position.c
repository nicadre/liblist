/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _list_cut_position.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:52:00 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:54:30 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			_list_cut_position(t_list_head *list, t_list_head *head,
								t_list_head *entry)
{
	t_list_head	*new_first;

	new_first = entry->next;
	list->next = head->next;
	list->next->prev = list;
	list->prev = entry;
	entry->next = list;
	head->next = new_first;
	new_first->prev = head;
}
