/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 14:07:01 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/23 16:24:15 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*nstr;

	if (!s && !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	nstr = malloc(len + 1);
	if (!nstr)
		return (NULL);
	while (i < ft_strlen(s))
	{
		nstr[i] = (*f)(i, s[i]);
		i++;
	}
	nstr[i] = 0;
	return (nstr);
}
