/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:49:30 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/10 14:24:04 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		i;
	int		j;
	char	*tab;
	int		len;

	if (s1 == 0 || s2 == 0)
		return (0);
	len = (ft_strlen(s1) + ft_strlen(s2) + 1);
	tab = malloc (sizeof(char) * len);
	if (tab == NULL)
		return (0);
	i = 0;
	while (s1[i])
	{
		tab[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		tab[i] = s2[j];
		i++;
		j++;
	}
	tab[i] = '\0';
	return (tab);
}
/*int main()
{
	printf("%s", ft_strjoin("hello"," world"));
}*/