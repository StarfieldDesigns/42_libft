/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:22:32 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:22:35 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;

	i = 0;
	res = ft_strnew(ft_strlen(s));

	if (!s || !f || !res)
		return (NULL);

	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}

	return (res);
}
