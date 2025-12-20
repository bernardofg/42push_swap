/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:37:20 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/29 19:05:12 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	void	*ptr;

	i = nmemb * size;
	if (size != 0 && nmemb > (size_t)(-1) / size)
		return (NULL);
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, i);
	return (ptr);
}
/*
#include "stdio.h"
int	main(void)
{
	int num = 15;
	int *res = ft_calloc(num, sizeof(int));
	for (int i = 0; i < num; i++)
		printf("%d ", res[i]);
	return (0);
}
*/
