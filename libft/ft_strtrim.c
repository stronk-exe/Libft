/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:51:48 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/15 22:54:00 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_double(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	set_pos(char const *s, char const *set, int pos)
{
	while (s[pos])
	{
		if (!check_double(set, s[pos]))
		{
			break ;
		}
		pos++;
	}
	return (pos);
}

int	rev_set_pos(char const *s, char const *set, int pos, int fst_pos)
{
	while (pos > fst_pos)
	{
		if (!check_double(set, s[pos - 1]))
		{
			break ;
		}
		pos--;
	}
	return (pos - fst_pos);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int		i;
	int		j;
	int		len;
	char	*t;

	if (s1 == 0 || set == 0)
		return (0);
	i = 0;
	len = ft_strlen(s1);
	i = set_pos(s1, set, i);
	len = rev_set_pos(s1, set, len, i);
	t = malloc(sizeof(char) * (len + 1));
	if (t == NULL)
		return (0);
	j = 0;
	while (j < len)
		t[j++] = s1[i++];
	t[j] = '\0';
	return (t);
}
