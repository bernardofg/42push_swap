/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:07:24 by bfantine          #+#    #+#             */
/*   Updated: 2025/10/17 18:35:24 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*new;

	str_len = ft_strlen(s);
	if (start > str_len)
		return (ft_strdup(""));
	else if (start + len > str_len)
		len = str_len - start;
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s + start, len + 1);
	return (new);
}

/*
#include <stdio.h>

int main(void)
{
    char *s = "alfredo";
    char *sub;

    sub = ft_substr(s, 0, 4);
    printf("%s\n", sub);
    free(sub);

    return 0;
}
*/
