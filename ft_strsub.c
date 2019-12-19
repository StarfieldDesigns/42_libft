
#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	char *sub;
	int i;

	sub = (char*)malloc(len);
	i = 0;
	if (!sub)
		return (NULL);
	while (len)
	{
		sub[i++] = s[start++];
		len--;
	}
	sub[i] = 0;
	return (sub);
}