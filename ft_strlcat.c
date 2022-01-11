/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:50:36 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/18 15:50:36 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (len < size && *dst)
	{
		dst++;
		len++;
	}
	if (!size || len == size)
		return (len + ft_strlen(src));
	while (*src)
	{
		if (len < size - 1)
		{
			*dst = *src;
			dst++;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
