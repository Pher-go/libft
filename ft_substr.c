/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:30:01 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/28 15:30:29 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	min(int x, int y)
{
	return (x * (x <= y) + y * (x > y));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		slen;
	int		dlen;
	int		i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	dlen = 0;
	if (start < (unsigned)slen)
		dlen = min(slen - start, len);
	p = (char *)malloc(dlen + 1);
	if (p)
	{
		i = 0;
		while (s[i] && dlen--)
		{
			p[i] = s[start + i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
