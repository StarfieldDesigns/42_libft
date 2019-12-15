
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char ltr;

	ltr = c;
	while (*s)
	{
		if (*s == ltr)
			return ((char *)s);
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return (NULL);
}
