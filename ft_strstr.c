
#include "libft.h"

char	*ft_strstr(const char *source, const char *substr)
{
	int safe = 0;
	char *res = (char*)source;
	char *tmp = (char*)substr;

	if (!substr)
		return ((char*)source);
	while (*source)
	{
		if (*tmp == *source && safe == 0)
			res = (char*)source;
		safe = 1;
		if (*tmp == *source)
			tmp++;
		else if (safe == 1)
		{
			safe = 0;
			tmp = (char*)substr;
		}
		if (*tmp == '\0')
			return (res);
		source++;
	}
	return (NULL);
}
