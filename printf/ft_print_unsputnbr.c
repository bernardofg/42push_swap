/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsputnbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:29:57 by bfantine          #+#    #+#             */
/*   Updated: 2025/11/03 13:33:18 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsputnbr(unsigned int n)
{
	long	nbr;
	char	c;
	int		count;

	nbr = n;
	c = '0';
	count = 0;
	if (nbr >= 10)
		count += ft_print_unsputnbr(nbr / 10);
	c = (nbr % 10) + '0';
	count += ft_print_char(c);
	return (count);
}
