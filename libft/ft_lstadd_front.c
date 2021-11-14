/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:34:47 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/13 15:45:14 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//t_list *list;

	//list = *lst;
	new->next = *lst;
	*lst = new;
	//*lst = new;

	//*lst = new->next;
	//*lst = new;
}
