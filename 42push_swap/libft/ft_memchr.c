/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:00:33 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/16 17:42:08 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temps;
	unsigned char	tempc;
	size_t			i;

	temps = (unsigned char *)s;
	tempc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (temps[i] == tempc)
			return (&temps[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "abcdef";

	printf("Antes: %s\n", src);

	ft_memchr(src + 2, src, 4);

	printf("Depois: %s\n", src);

	return (0);
}
*/
