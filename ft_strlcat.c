
#include "libft.h"
#include <stdio.h>
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
	a = ft_strlen((char*)src);
	if (!dest[a])
	{
		while (len && a < (int)size)
		{
			dest[a++] = *src;
			src++;
		}
	}
	dest[a] = '\0';
	return (len);
}

int		main(void)
{
	char *one = "This string\0";
	const char *two = " needs more\0";

	ft_strlcat(one, two, 24);
	printf("%s\n", two);
	printf("%s\n", one);
	return (0);
}
