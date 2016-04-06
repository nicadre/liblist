/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_splice_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:28:51 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:29:48 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_splice_init(t_list_head *list, t_list_head *head)
{
	if (!list_empty(list))
	{
		_list_splice(list, head, head->next);
		init_list_head(list);
	}
}
