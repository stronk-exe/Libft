/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:15:00 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/13 16:49:02 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *cont)
{
	//cont = NULL;
	free(cont);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
}
