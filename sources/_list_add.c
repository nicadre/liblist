/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _list_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:17:47 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 21:29:00 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		_list_add(t_list_head *new, t_list_head *prev, t_list_head *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}
