/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:42:47 by niccheva          #+#    #+#             */
/*   Updated: 2016/04/06 09:31:39 by niccheva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "list.h"

#define list_for_each(pos, head)								\
	for (pos = (head)->next; pos != (head); pos = pos->next)
#define list_for_each_prev(pos, head)							\
	for (pos = (head)->prev; pos != (head); pos = pos->prev)

struct				s_person
{
	unsigned int	age;
	t_list		list;
};

int					main(void)
{
	int				i;
	struct s_person	*person_list;

	person_list = malloc(sizeof(*person_list));
	init_list(&person_list->list);
	srand(time(NULL));
	i = 0;
	while (i < 10)
	{
		struct s_person	*new;

		new = malloc(sizeof(*new));
		new->age = rand() % 100;
		init_list(&new->list);
		list_add_tail(&(new->list), (&person_list->list));
		++i;
	}

	t_list		*pos;
	struct s_person	*tmp;

	list_for_each_prev(pos, &person_list->list)
	{
		tmp = list_entry(pos, struct s_person, list);

		printf("%d\n", tmp->age);

	}

	return (0);
}
