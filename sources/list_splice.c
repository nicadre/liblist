/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_splice.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:25:32 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:26:33 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_splice(const t_list_head *list, t_list_head *head)
{
	if (!list_empty(list))
		_list_splice(list, head, head->next);
}
