
#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t n)
{
	int a;

	a = 0;
	while (n-- && s1[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (s1[a] - s2[a]);
}
