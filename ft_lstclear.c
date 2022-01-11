/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:55:09 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/28 15:37:08 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_elem;
	t_list	*i;

	if (!lst)
		return ;
	i = *lst;
	while (i)
	{
		next_elem = i->next;
		ft_lstdelone(i, del);
		i = next_elem;
	}
	*lst = NULL;
}
