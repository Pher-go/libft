/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:45:29 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/20 16:45:29 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (dest)
	{
		p = dest;
		while (*s1)
			*p++ = *s1++;
		while (*s2)
			*p++ = *s2++;
		*p = '\0';
	}
	return (dest);
}
