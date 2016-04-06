/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_del.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:24:23 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 20:52:12 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

//#define LIST_POISON1  ((void *) 0x100 + 0)
//#define LIST_POISON2  ((void *) 0x200 + 0)

void		list_del(t_list_head *entry)
{
	_list_del(entry->prev, entry->next);
//	entry->next = LIST_POISON1;
//	entry->prev = LIST_POISON2;
}
