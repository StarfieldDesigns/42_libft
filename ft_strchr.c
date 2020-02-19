/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:19:49 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:19:55 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ltr;

	ltr = c;
	while (*s)
	{
		if (*s == ltr)
			return ((char *)s);
		s++;
	}
	if (c == '\0' && *s == c)
		return ((char *)s);
	return (NULL);
}
