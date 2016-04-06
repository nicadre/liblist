/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_del_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:32:06 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:33:29 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_del_init(t_list_head *entry)
{
	_list_del_entry(entry);
	init_list_head(entry);
}
