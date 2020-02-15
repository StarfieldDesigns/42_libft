/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:21:52 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:22:02 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	slen;
	size_t	dlen;


	return (dlen + slen);
}

int		main(void)
{
	char *dest = "five";
	dest = malloc(9);
	const char *src = "six";

	ft_strlcat(dest, src, 9);
	printf("%s\n", dest);
	return (0);
}
