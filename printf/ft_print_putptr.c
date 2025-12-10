/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:48:03 by bfantine          #+#    #+#             */
/*   Updated: 2025/11/03 13:25:41 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putptr(void *p)
{
	int				count;
	unsigned long	ptr;

	count = 0;
	ptr = (unsigned long)p;
	if (ptr == 0)
		return (ft_print_string("(nil)"));
	count += ft_print_string("0x");
	count += ft_print_putnbrhex(ptr, 'x');
	return (count);
}
