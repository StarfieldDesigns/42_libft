/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:05:29 by aholtzma          #+#    #+#             */
/*   Updated: 2019/05/13 17:05:33 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int a;

	a = 0;
	while (*src != '\0')
	{
		dest[a] = *src;
		src++;
		a++;
	}
	dest[a] = '\0';
	return (0);
}
