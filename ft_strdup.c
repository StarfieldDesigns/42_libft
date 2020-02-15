/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:32:02 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:21:09 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (*src != '\0')
	{
		dest[a] = *src;
		src++;
		a++;
	}
	dest[a] = '\0';
	return (0);
}

int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char *dup;

	dup = (char*)malloc(sizeof(*dup) * (ft_strlen(src) + 1));
	ft_strcpy(dup, src);
	return (dup);
}
