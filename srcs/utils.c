/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:30:53 by bfantine          #+#    #+#             */
/*   Updated: 2025/12/20 16:34:45 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	parse_numbers(t_stacks *s)
{
	char	**temp;
	int		i;
	int		j;

	j = 0;
	temp = ft_split(s->join_args, ' ');
	i = 0;
	while (temp[i] != NULL && temp[i][0] != '\0')
	{
		s->a[j++] = ft_atol(temp[i++], s);
		free(temp[i - 1]);
	}
	free(temp);
}

void	initialize_stacks(int argc, char **argv, t_stacks *s)
{
	int	i;

	i = 0;
	s->a_size = 0;
	s->b_size = 0;
	while (--argc)
	{
		if (ft_count_words(argv[i + 1], ' '))
			s->a_size += ft_count_words(argv[i + 1], ' ');
		else
			s->a_size++;
		i++;
	}
	s->a = malloc(s->a_size * sizeof * s->a);
	if (s->a == NULL)
		free_message(s, "Error\n");
	s->b = malloc(s->a_size * sizeof * s->b);
	if (s->b == NULL)
		free_message(s, "Error\n");
}

void	create_index(t_stacks *s)
{
	int	i;
	int	j;
	int	k;
	int	*new_a;

	new_a = malloc(s->a_size * sizeof * new_a);
	if (new_a == NULL)
		free_message(s, "Error\n");
	i = -1;
	while (++i < s->a_size)
	{
		k = 0;
		j = -1;
		while (++j < s->a_size)
			if (s->a[i] > s->a[j])
				k++;
		new_a[i] = k;
	}
	i = s->a_size;
	while (i--)
		s->a[i] = new_a[i];
	free(new_a);
}

int	ft_atol(const char *str, t_stacks *s)
{
	int			i;
	long		sign;
	long long	res;

	res = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (res > 2147483647 || (res * sign) < -2147483648 || ft_strlen(str) > 11)
			free_message(s, "Error\n");
		if (!(str[i] >= '0' && str[i] <= '9'))
			free_message(s, "Error\n");
		res = res * 10 + (str[i++] - '0');
		if (sign == 1 && res > 2147483647)
			free_message(s, "Error\n");
		if (sign == -1 && res > 2147483648)
			free_message(s, "Error\n");
	}
	return ((int)(res * sign));
}
