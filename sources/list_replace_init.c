/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_replace_init.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:31:04 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:31:54 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void		list_replace_init(t_list_head *old, t_list_head *new)
{
	list_replace(old, new);
	init_list_head(old);
}
