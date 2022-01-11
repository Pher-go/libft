/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:18:06 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/20 16:18:06 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	const char	*s;
	char		*dest;
	int			len;

	s = src;
	len = 0;
	while (*s++)
		len++;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (*src != '\0')
		*dest++ = *src++;
	*dest = '\0';
	return (dest - len);
}
