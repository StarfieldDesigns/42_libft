/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:23:45 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:23:51 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *source, const char *substr, size_t len)
{
	int	 safe = 0;
	char *res = (char*)source;
	char *tmp = (char*)substr;
	
	if (!substr)
		return ((char*)source);
	while (*source && len > 0)
	{							
		if (*tmp == *source && safe == 0)
			res = (char*)source;
		safe = 1;							
		if (*tmp == *source)
			tmp++;
		else if (safe == 1)
		{
			safe = 0;																
			tmp = (char*)substr;				
		}
		if (*tmp == '\0')	
			return (res);
		source++;
		len--;
	}
	return (NULL);						
}
