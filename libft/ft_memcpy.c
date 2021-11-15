/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-asri <ael-asri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:10:48 by ael-asri          #+#    #+#             */
/*   Updated: 2021/11/14 22:54:15 by ael-asri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void	*src, size_t	n)
{
	unsigned char	*s;
	unsigned char	*d;

	//if (src == 0 && dst == 0)
	//	return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
