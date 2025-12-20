/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:56:59 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/12/20 16:29:03 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_message(t_stacks *s, char *msg)
{
	if (msg)
		write(2, msg, ft_strlen(msg));
	if (s != NULL)
	{
		if (s->a != NULL)
			free(s->a);
		if (s->b != NULL)
			free(s->b);
		if (s->join_args != NULL)
			free(s->join_args);
		if (s != NULL)
			free(s);
	}
	if (msg)
		exit(1);
	else
		exit(0);
}

void	check_duplicate(t_stacks *s, int i)
{
	int	j;

	j = 0;
	if (i == 0)
	{
		while (i < s->a_size)
		{
			j = i + 1;
			while (j < s->a_size)
			{
				if (s->a[i] == s->a[j])
					free_message(s, "Error\n");
				j++;
			}
			i++;
		}
	}
	if (array_is_sorted(s))
		free_message(s, NULL);
}
