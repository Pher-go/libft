/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 16:58:15 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/18 16:58:15 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	while (n-- > 1 && *s1 && *s2 && *s1 == *s2)
	{	
		s1++;
		s2++;
	}
	return (((unsigned)*s1 > (unsigned)*s2) - ((unsigned)*s2 > (unsigned)*s1));
}
