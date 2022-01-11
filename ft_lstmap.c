/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmanuel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:57:22 by fmanuel-          #+#    #+#             */
/*   Updated: 2021/10/28 15:36:34 by fmanuel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*last;

	if (!lst)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (new_list)
	{
		last = new_list;
		lst = lst->next;
		while (lst)
		{
			temp = ft_lstnew(f(lst->content));
			if (!temp)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			last->next = temp;
			last = temp;
			lst = lst->next;
		}
	}
	return (new_list);
}
