
#include "libft.h"

int		ft_strlen2(const char *s, int i, char c)
{
	int len;
	int a;

	len = 0;
	a = i;
	while (s[a] != '\0' && s[a] != c)
	{
		len++;
		a++;
	}
	return (len);
}