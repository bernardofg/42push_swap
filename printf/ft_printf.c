/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:09:34 by bfantine          #+#    #+#             */
/*   Updated: 2025/11/02 16:50:23 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	char	c;
	int		count;

	va_start(ap, s);
	count = 0;
	while (*s)
	{
		if (*s == '%')
		{
			s++;
			c = *s;
			count += ft_format(c, ap);
		}
		else
		{
			write (1, s, 1);
			count++;
		}
		s++;
	}
	va_end(ap);
	return (count);
}
