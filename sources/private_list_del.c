/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_list_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:23:11 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:19:15 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		private_list_del(t_list *prev, t_list *next)
{
	next->prev = prev;
	prev->next = next;
}
