
#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int a;
	int b;
	char *tmp;

	a = ft_strlen(s1);
	b = 0;
	tmp = s1;
	s1 = (char*)malloc((ft_strlen(s1) + ft_strlen((char*)s2)) + 1);
	ft_strcpy(s1, tmp);
	while (n--)
		s1[a++] = s2[b++];
	s1[a] = '\0';
	return (s1);
}
