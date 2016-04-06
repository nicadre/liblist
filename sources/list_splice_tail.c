/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_splice_tail.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:27:36 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:28:45 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_splice_tail(const t_list_head *list, t_list_head *head)
{
	if (!list_empty(list))
		_list_splice(list, head->prev, head);
}
