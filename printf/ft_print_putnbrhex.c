/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbrhex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:37:27 by bfantine          #+#    #+#             */
/*   Updated: 2025/11/03 13:34:01 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putnbrhex(unsigned long n, char c)
{
	char	*base;
	int		count;

	count = 0;
	if (c == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_print_putnbrhex(n / 16, c);
	count += ft_print_char(base[n % 16]);
	return (count);
}
