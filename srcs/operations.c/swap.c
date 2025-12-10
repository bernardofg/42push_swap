/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 19:40:57 by bfantine          #+#    #+#             */
/*   Updated: 2025/12/10 20:18:34 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   swap(t_stacks *op, int *array, int size)
{
    int temp;

    if (size <= 0)
        return ;
    temp = array[0];
    array[0] = array[1];
    array[1] = temp;
    ft_putendl_fd(op, 1);
}

void    push(char *op, t_stacks *s)
{
    int temp;

    if (ft_strncmp(op, "pa", 3 ) == 0)
    {
        if (s->b_size <= 0)
            return ;
        temp = s->b[0];
        ft_memmove(s->a + 1, s->a, sizeof(int) * s->a_size);
        s->a[0] = temp;
        s->b_size--;
        ft_memmove(s->b, s->b + 1, sizeof(int) * s->b_size);
    }
    else if (ft_strncmp(op, "pb", 3) == 0)
    {
        if (s->a_size <= 0)
            return ;
        temp = s->a[0];
        ft_memmove(s->b + 1, s->b, sizeof(int) * s->b_size);
        s->b[0] = temp;
        s->a_size--;
        ft_memmove(s->a, s->a + 1, sizeof(int) * s->a_size);
    }
    ft_putendl_fd(op, 1);
}