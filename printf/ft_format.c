/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:09:26 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/31 18:09:30 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char type, va_list ap)
{
	if (type == '%')
		return (ft_print_char('%'));
	if (type == 'c')
		return (ft_print_char(va_arg(ap, int)));
	if (type == 'd' || type == 'i')
		return (ft_print_putnbr(va_arg(ap, int)));
	if (type == 's')
		return (ft_print_string(va_arg(ap, char *)));
	if (type == 'x' || type == 'X')
		return (ft_print_putnbrhex(va_arg(ap, unsigned int), type));
	if (type == 'p')
		return (ft_print_putptr(va_arg(ap, void *)));
	if (type == 'u')
		return (ft_print_unsputnbr(va_arg(ap, unsigned int)));
	return (0);
}
