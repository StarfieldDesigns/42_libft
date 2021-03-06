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

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *dest, size_t len);
void		*ft_memcpy(void *dest, const void *src, size_t len);
void		*ft_memchr(const void *str, int c, size_t len);
void		*ft_memccpy(void *dest, const void *src, int c, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
int			ft_memcmp(const void *s1, const void *s2, size_t len);
size_t		ft_strlen(const char *str);
int			ft_strlen2(const char *s, int i, char c);
char		*ft_strdup(const char *src);
char 		*ft_strcpy(char *dest, const char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
char		*ft_strstr(const char *source, const char *substr);
char		*ft_strnstr(const char *source, const char *substr, size_t len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strcmp(char *s1, char *s2);
int			ft_strncmp(char *s1, char *s2, size_t n);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char*s, void (*f)(char*));
void		ft_striteri(char*s, void (*f)(unsigned int, char *));
char		*ft_strnew(size_t size);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int			ft_strequ(const char *s1, const char *s2);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strsub(const char *s, unsigned int start, size_t len);
char		*ft_strjoin(const char *s1, const char *s2);
char		*ft_strtrim(const char *s);
char		**ft_strsplit(const char *s, char c);
int			ft_wordcount(const char *s, char c);
int			ft_atoi(char *str);
char		*ft_itoa(int n);
int			ft_countdigits(unsigned int n);
char		*ft_strrev(char *str);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
