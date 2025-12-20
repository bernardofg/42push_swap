/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:53:57 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/14 19:20:45 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			tempc;

	tempc = (char) c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == tempc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == tempc)
		return ((char *) &s[i]);
	return (NULL);
}
