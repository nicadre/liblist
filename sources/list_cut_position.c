/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_cut_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:55:08 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:35:23 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_cut_position(t_list_head *list, t_list_head *head,
							t_list_head *entry)
{
	if (list_empty(head))
		return ;
	if (list_is_singular(head) && (head->next != entry && head != entry))
		return ;
	if (entry == head)
		init_list_head(list);
	else
		_list_cut_position(list, head, entry);
}
