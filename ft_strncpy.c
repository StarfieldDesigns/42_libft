/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:05:43 by aholtzma          #+#    #+#             */
/*   Updated: 2019/05/13 17:06:17 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	unsigned int b;

	a = 0;
	b = ft_strlen(src);
	while (n >= b && (*src != '\0'))
	{
		dest[a] = *src;
		a++;
		src++;
		while (a >= b && a < n)
		{
			dest[a] = '\0';
			a++;
		}
	}
	while (n < b && a < n)
	{
		dest[a] = *src;
		src++;
		a++;
	}
	return (0);
}
