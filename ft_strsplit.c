/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:24:07 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:37:58 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char **list;
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	if (!(list = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break;

		list[j] = (char*)malloc((ft_strlen2(s, i, c)) + 1);
		while (s[i] != c && s[i] != '\0')
			list[j][k++] = s[i++];
		list[j++][k] = 0;
	}
	list[j] = 0;
	return (list);
}
