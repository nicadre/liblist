/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_list_add.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:17:47 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:18:50 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		private_list_add(t_list *new, t_list *prev, t_list *next)
{
	next->prev = new;
	new->next = next;
	new->prev = prev;
	prev->next = new;
}
