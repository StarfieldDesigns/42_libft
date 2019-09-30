/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aholtzma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 16:07:05 by aholtzma          #+#    #+#             */
/*   Updated: 2019/05/13 16:12:04 by aholtzma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *dest, int val, size_t len);
void	ft_bzero(void *dest, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *str, int c, size_t len);
void	*ft_memccpy(void *dest, const void *src, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t len);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char 	*ft_strcpy(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strstr(const char *source, const char *substr);
char	*ft_strnstr(const char *source, const char *substr, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif
