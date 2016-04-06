/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:43:36 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/27 17:44:22 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

BOOL		list_is_last(const t_list_head *list, const t_list_head *head)
{
	return (list->next == head);
}
