/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:32:02 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 15:21:09 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dup;

	dup = (char*)malloc(sizeof(*dup) * (ft_strlen(src) + 1));
	ft_strcpy(dup, src);
	return (dup);
}
