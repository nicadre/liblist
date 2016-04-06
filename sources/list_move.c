/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:33:45 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:34:40 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_move(t_list_head *list, t_list_head *head)
{
	_list_del_entry(list);
	list_add(list, head);
}
