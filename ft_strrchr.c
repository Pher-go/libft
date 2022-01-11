/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 17:17:06 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/18 17:17:06 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == ch)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
