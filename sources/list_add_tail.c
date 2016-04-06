/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_tail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:22:24 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:23:05 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_add_tail(t_list_head *new, t_list_head *head)
{
	_list_add(new, head->prev, head);
}
