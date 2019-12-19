
#include "libft.h"

char	*ft_strtrim(const char *s)
{
	char *trim;
	int i, j;

	trim = (char*)malloc(ft_strlen(s));
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		else
			trim[j++] = s[i++];
	}

	trim[j] = 0;

	return (trim);
}