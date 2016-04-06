/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_replace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:29:25 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:30:56 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_replace(t_list_head *old, t_list_head *new)
{
	new->next = old->next;
	new->next->prev = new;
	new->prev = old->prev;
	new->prev->next = new;
}
