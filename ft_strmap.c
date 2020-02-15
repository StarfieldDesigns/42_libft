/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:22:25 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:22:28 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char *res;
	int i;

	i = 0;
	res = ft_strnew(ft_strlen(s));

	if (!s || !f || !res)
		return (NULL);

	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}

	return (res);
}
