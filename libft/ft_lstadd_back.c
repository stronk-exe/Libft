/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:13:07 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/13 16:29:47 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	list = *lst;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
}
