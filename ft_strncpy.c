/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:05:43 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:23:22 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = ft_strlen(src);
	while (n >= b && (*src != '\0'))
	{
		dest[a] = *src;
		a++;
		src++;
		while (a >= b && a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
	while (n < b && a < n)
	{
		dest[a] = *src;
		src++;
		a++;
	}
	return (0);
}
