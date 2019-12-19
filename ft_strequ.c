
#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return 0;
	}
	return 1;
}