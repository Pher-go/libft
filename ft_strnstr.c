/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:06:48 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/18 17:06:48 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (!*find)
		return ((char *)s);
	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == find[0])
		{
			j = 0;
			while ((i + j) < n && find[j] && s[i + j] && find[j] == s[i + j])
				j++;
			if (!find[j])
				return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}
