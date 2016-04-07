/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_empty.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 17:46:53 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/07 09:56:56 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		list_empty(const t_list *head)
{
	return (head->next == head && head->next == head->prev);
}
