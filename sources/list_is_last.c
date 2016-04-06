/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:43:36 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:18:01 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		list_is_last(const t_list *list, const t_list *head)
{
	return (list->next == head);
}
