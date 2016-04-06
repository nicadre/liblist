/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _list_splice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:23:26 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:25:20 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void			_list_splice(const t_list_head *list, t_list_head *prev,
							t_list_head *next)
{
	t_list_head	*first;
	t_list_head	*last;

	first->prev = prev;
	prev->next = first;
	last->next = next;
	next->prev = last;
}
