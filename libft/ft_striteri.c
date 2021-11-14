/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:13:02 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/13 23:28:20 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	f(unsigned int n, char *s)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		s[i] = '*';
		i++;
	}
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s == 0)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
