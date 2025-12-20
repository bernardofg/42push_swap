/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:21:27 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/22 14:15:17 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tempdest;
	unsigned char	*tempsrc;

	tempdest = (unsigned char *)dest;
	tempsrc = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "abcdef";

	printf("Antes: %s\n", src);

	ft_memcpy(src + 2, src, 4);

	printf("Depois: %s\n", src);

	return (0);
}
*/
