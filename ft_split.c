/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:55:37 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/20 16:55:37 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char c)
{
	int		wc;

	wc = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
		{
			wc++;
			while (*str && *str != c)
				str++;
		}	
	}
	return (wc);
}

static	char	**ft_clean_array(char **array, int i)
{
	while (i--)
		free(array[i]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*tmp;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	array = (char **)ft_calloc(ft_word_count(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tmp = (char *)s++;
			while (*s && *s != c)
				s++;
			array[i] = ft_substr(tmp, 0, s - tmp);
			if (!array[i++])
				return (ft_clean_array(array, --i));
		}
	}
	return (array);
}
