/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:44:47 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/21 20:45:09 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_len(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb /= 10;
		len += 2;
	}
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		i;
	long	nl;
	char	*nbr;

	nl = n;
	i = 0;
	len = nbr_len(n);
	nbr = malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[len] = 0;
	if (nl < 0)
	{
		nl *= -1;
		nbr[i] = '-';
		i++;
	}
	while (i < len)
	{
		nbr[--len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (nbr);
}

/*
#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int n);

int	main(void)
{
	int		testes[] = {0, 42, -42, 12345, -12345, 2147483647, -2147483648};
	char	*resultado;
	int		i = 0;

	while (i < 7)
	{
		resultado = ft_itoa(testes[i]);
		if (resultado == NULL)
		{
			printf("Erro ao converter %d\n", testes[i]);
			i++;
			continue;
		}
		printf("ft_itoa(%d) = \"%s\"\n", testes[i], resultado);
		free(resultado);
		i++;
	}
	return (0);
}
*/
