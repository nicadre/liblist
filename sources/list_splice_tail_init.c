/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_splice_tail_init.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:29:57 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:31:02 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_splice_tail_init(t_list_head *list, t_list_head *head)
{
	if (!list_empty(list))
	{
		_list_splice(list, head->prev, head);
		init_list_head(list);
	}
}
