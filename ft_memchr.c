/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:58:05 by aholtzma          #+#    #+#             */
/*   Updated: 2019/05/13 16:02:39 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char *s;

	s = (unsigned char *)str;
	while (len--)
	{
		if (*s != (unsigned char)c)
			s++;
		else
			return (s);
	}
	return (NULL);
}
