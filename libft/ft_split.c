/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfantine <bfantine@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:56:25 by bfantine          #+#    #+#             */
/*   Updated: 2025/12/20 15:37:02 by bfantine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;
	int	word;

	word = 1;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			word = 1;
		else
		{
			if (word == 1)
				count++;
			word = 0;
		}
		i++;
	}
	return (count);
}

static int	get_len(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static void	free_str(char **str, int index)
{
	while (index >= 0)
		free(str[index--]);
	free(str);
}

static char	*ft_strndup(char const *src, char c, int index, char **str)
{
	char	*dest;
	int		i;
	int		size;

	size = get_len((char *)src, c);
	i = 0;
	dest = malloc(size + 1);
	if (!dest)
	{
		free_str(str, index - 1);
		return (0);
	}
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	char	**out;
	int		i;

	n = 0;
	i = 0;
	out = malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!out)
		return (NULL);
	while (s[n])
	{
		if (get_len((char *)&s[n], c) > 0)
		{
			out[i] = ft_strndup(&s[n], c, i, out);
			if (!out[i])
				return (NULL);
			n += get_len((char *)&s[n], c);
			i++;
		}
		else
			n++;
	}
	out[i] = NULL;
	return (out);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "alfredo,cebola,coelho,abelha";
	char	c = ',';
	char	**result = ft_split(str, c);
	int		i = 0;

	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	return (0);
}
*/
