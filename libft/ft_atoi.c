/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 21:25:38 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/11 19:22:49 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_max_min(unsigned long res, int sign)
{
	if (res >= 9223372036854775807)
	{
		if (sign > 0)
			return (-1);
	}
	return (0);
}

int	check_sign(char s, int sign)
{
	if (s == '+' || s == '-')
	{
		if (s == '-')
			sign = -1;
		else
			sign = 1;
	}
	return (sign);
}

int	ft_atoi(const char	*str)
{
	int				i;
	int				sign;
	unsigned long	res;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = check_sign(str[i], sign);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (res >= 9223372036854775807)
		return (check_max_min(res, sign));
	return (res * sign);
}
