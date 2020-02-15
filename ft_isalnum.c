/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 14:58:22 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 14:58:25 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9)' && (c >= 'A' && <= 'Z') && (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
