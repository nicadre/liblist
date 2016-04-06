/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niccheva <niccheva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/27 18:42:47 by niccheva          #+#    #+#             */
/*   Updated: 2016/03/28 10:47:53 by niccheva         ###   ########.fr       */
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
	t_list_head		list;
};

int					main(void)
{
	int				i;
	struct s_person	*person_list;

	person_list = malloc(sizeof(*person_list));
	init_list_head(&person_list->list);
	srand(time(NULL));
	i = 0;
	while (i < 10)
	{
		struct s_person	*new;

		new = malloc(sizeof(*new));
		new->age = rand() % 100;
		init_list_head(&new->list);
		list_add_tail(&(new->list), (&person_list->list));
		++i;
	}

	t_list_head		*pos;
	struct s_person	*tmp;

	list_for_each_prev(pos, &person_list->list)
	{
		tmp = list_entry(pos, struct s_person, list);

		printf("%d\n", tmp->age);

	}

	printf("\n\n");
	list_rotate_left(&person_list->list);
	list_for_each_prev(pos, &person_list->list)
	{
		tmp = list_entry(pos, struct s_person, list);

		printf("%d\n", tmp->age);

	}

	return (0);
}
