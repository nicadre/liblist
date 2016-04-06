/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_singular.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:21:10 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 18:22:10 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

BOOL		list_is_singular(const t_list_head *head)
{
	return (!list_empty(head) && (head->next == head->prev));
}
