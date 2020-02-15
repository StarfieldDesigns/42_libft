/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:24:00 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:24:04 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char *rev;
	int a;
	int b;

	rev = malloc(ft_strlen(str));
	a = 0;
	b = 0;

	while (str[a])
		a++;
	a--;
	while (b < (int)(ft_strlen(str)))
		rev[b++] = str[a--];
	
	rev[b] = 0;
	return (rev);
}
