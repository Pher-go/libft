/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:56:09 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/20 16:56:09 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ndigits(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char				*a;
	int					digit;
	unsigned int		nbr;

	digit = ft_ndigits(n) + (n < 0);
	a = (char *)malloc(digit + 1);
	if (a)
	{
		nbr = n * ((n >= 0) - (n < 0));
		a[digit] = '\0';
		while (digit--)
		{
			a[digit] = nbr % 10 + '0';
			nbr /= 10;
		}
		if (n < 0)
			a[0] = '-';
	}
	return (a);
}
