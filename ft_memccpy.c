/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 15:57:34 by aholtzma          #+#    #+#             */
/*   Updated: 2019/05/13 15:57:44 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <math.h>
#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	void *p;
	
	if (len <= 0)
		return (NULL);
	p = ft_memchr(src, c, len);
	if (p != NULL)
		return ((ft_memcpy(dest, src, (p - src) + 1)));
	ft_memcpy(dest, src, len);
	return (NULL);
}

int		main(void)
{
	void *temp, *temp2;
	unsigned long tab[11], tab2[11], tab3[11];
	int a;

	a = 0;
	while (a < 11)
	{
		tab[a] = (unsigned long)rand() * 1000;
		tab2[a] = 0;
		tab3[a] = 0;
		a++;
	}
	temp = memccpy(tab2, tab, 'a', 0);
	memcpy(tab3, tab2, sizeof(tab));
	memset(tab2, 0, sizeof(tab2));
	temp2 = ft_memccpy(tab2, tab, 'a', 0);

	if (temp == temp2 && (memcmp(tab2, tab3, sizeof(tab)) == 0))
		printf("Match - OK\n");
	else
		printf("No match - Fail\n");
	return (0);
}
