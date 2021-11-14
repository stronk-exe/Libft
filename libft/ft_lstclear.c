/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:38:16 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/14 13:00:23 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *data)
{
	free(data);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void	*))
{
	t_list	*list;

	list = *lst;
	while (*lst != NULL)
	{
		*lst = list->next;
		del(list->content);
		free(list);
		list = *lst;
	}
}
