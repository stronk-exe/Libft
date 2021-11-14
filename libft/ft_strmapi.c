/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:38:24 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/13 21:59:15 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	f(unsigned int n, char c)
{
	n += 1;
	c = '*';
	return (c);
}*/

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char	*t;
	int		i;

	if (s == 0)
		return (0);
	t = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (t == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		t[i] = f(i, s[i]);
		i++;
	}
	t[i] = '\0';
	return (t);
}
/*int main()
{
    //char *s = "hello";
    printf("%s", ft_strmapi("hello", f));
}*/