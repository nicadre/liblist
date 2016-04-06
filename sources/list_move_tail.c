/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_move_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:37:09 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:37:56 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_move_tail(t_list_head *list, t_list_head *head)
{
	_list_del_entry(list);
	list_add_tail(list, head);
}
