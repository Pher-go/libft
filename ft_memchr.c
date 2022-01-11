/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:18:13 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/18 17:18:13 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	b;

	s = (unsigned char *)src;
	b = (unsigned char)c;
	while (n--)
	{
		if (*s == b)
			return (s);
		s++;
	}
	return (NULL);
}
