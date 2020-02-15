/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 15:18:32 by aholtzma          #+#    #+#             */
/*   Updated: 2020/02/14 19:56:32 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_digits(unsigned int n)
{
	int digits;

	digits = 1;
	while ((n /= 10) > 0)
		digits++;
	return (digits);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				digits;

	num = ((n < 0) ? (unsigned int)-n : (unsigned int)n);
	digits = count_digits(num);
	if (!(str = ft_strnew(digits + ((n < 0) ? 1 : 0))))
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		digits++;
	}
	while (num)
	{
		str[--digits] = ((num < 9) ? num + '0' : (num % 10) + '0');
		num /= 10;
	}
	return (str);
}
