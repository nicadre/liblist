/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate_left.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:47:39 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:49:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			list_rotate_left(t_list_head *head)
{
	t_list_head	*first;

	if (!list_empty(head))
	{
		first = head->next;
		list_move_tail(first, head);
	}
}
