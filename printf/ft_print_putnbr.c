/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:17:40 by bfantine          #+#    #+#             */
/*   Updated: 2025/11/03 13:36:14 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putnbr(int n)
{
	long	nbr;
	char	c;
	int		count;

	nbr = n;
	c = '0';
	count = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_print_char('-');
	}
	if (nbr >= 10)
		count += ft_print_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	count += ft_print_char(c);
	return (count);
}
