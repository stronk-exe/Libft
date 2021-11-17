/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:28:16 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/17 16:31:26 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;
	t_list	*l;

	l = lst;
	while (l != NULL)
	{
		node = ft_lstnew(f(l->content));
		ft_lstadd_back(&list, node);
		l = l->next;
	}
	ft_lstclear(&l, del);
	return (list);
}
