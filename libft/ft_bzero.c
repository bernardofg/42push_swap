/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 21:50:04 by bfantine@st       #+#    #+#             */
/*   Updated: 2025/10/30 15:29:56 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include "stdio.h"
int	main(void)
{
	int	nbr = 2;
	int	*n = malloc(nbr * sizeof(int));
	ft_bzero(n, sizeof(int));
	for (int i = 0; i < nbr; i++)
		printf("%d ", n[i]);
	return (0);
}
*/