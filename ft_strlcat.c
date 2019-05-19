
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int a;
	char *tmp;
	size_t len;

	a = 0;
	tmp = dest;
	len = (size - (size_t)ft_strlen(dest) - 1);
	dest = (char*)malloc(size);
	strcpy(dest, tmp);
	a = ft_strlen(src) + 1;
	while (len--)
	{
		dest[a++] = *src;
		src++;
	}
	dest[a] = '\0';
	return (size);
}
