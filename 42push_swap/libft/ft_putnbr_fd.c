/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:12:56 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/22 19:41:25 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	char	c;

	nbr = n;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(fd, "-", 1);
	}
	if (nbr / 10 > 0)
		ft_putnbr_fd(nbr / 10, fd);
	c = (nbr % 10) + '0';
	write (fd, &c, 1);
}
