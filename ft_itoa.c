
#include "libft.h"
#include <stdio.h>
char	*ft_itoa(int n)
{
	char *str;
	int rem;
	int a;

	rem = 0;
	a = 0;

	if (n < 0)
		str[a++] = '-';
	while (n)
	{
		str[a++] = (n < 9) ? (n + '0') : (num % 10) + '0';
		n /= 10;
	}
	str[a] = '\0';
	return (str);
}

int		main(void)
{
	char *s;

	s = ft_itoa(285);
	printf("%s\n", s);
	return (0);
}
