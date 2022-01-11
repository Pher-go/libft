/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:58:39 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/28 15:33:57 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;
	char			c;

	nbr = nb;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nbr = -nb;
	}
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	c = '0' + nbr % 10;
	write(fd, &c, 1);
}
