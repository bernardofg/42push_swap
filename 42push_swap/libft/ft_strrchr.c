/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:47:38 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/15 10:58:58 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	char				tempc;

	tempc = (char) c;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == tempc)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == tempc)
		return ((char *) &s[i]);
	return (NULL);
}
