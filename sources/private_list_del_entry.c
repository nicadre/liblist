/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   private_list_del_entry.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:24:37 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:19:43 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		private_list_del_entry(t_list *entry)
{
	private_list_del(entry->prev, entry->next);
}
