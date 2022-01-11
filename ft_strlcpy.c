/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:47:55 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/28 15:32:04 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1)
		{
			if (*src == '\0')
				break ;
			*dst++ = *src++;
			i++;
		}
		*dst = '\0';
	}
	if (*src != '\0')
	{
		while (*src != '\0')
		{
			src++;
			i++;
		}
	}
	return (i);
}
