/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:23:54 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:23:57 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *save;
	
	save = (char *) 0;
	while (*s)
	{
		if (*s == c)
			save = (char *) s;
		s++;
	}
	if (c == '\0' && *s == c)
		return ((char *)s);
	return (save);
}
