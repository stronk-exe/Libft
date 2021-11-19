/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:47:40 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/15 21:24:51 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	int		i;
	int		n;
	char	*val;

	val = 0;
	i = 0;
	n = ft_strlen(s);
	while (i <= n)
	{
		if (s[i] == (char)c)
		{
			val = (char *)&s[i];
		}
		i++;
	}
	return (val);
}
