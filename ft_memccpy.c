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

void	*ft_memccpy(void *dest, const void *src, int c, size_t len)
{
	void *str;

	str = ft_memchr(src, c, len);
	if (str == NULL)
	{
		ft_memcpy(dest, src, len);
		return (NULL);
	}
	ft_memcpy(dest, src, (str - src + 1));
	return (dest);
}
