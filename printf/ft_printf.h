/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:09:40 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/31 18:08:29 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(char c, va_list ap);

int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_putptr(void *p);
int	ft_print_putnbr(int n);
int	ft_print_unsputnbr(unsigned int n);
int	ft_print_putnbrhex(unsigned long n, char c);

#endif
