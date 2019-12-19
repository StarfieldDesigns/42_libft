
#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char *res;
	int i;

	i = 0;
	res = ft_strnew(ft_strlen(s));

	if (!s || !f || !res)
		return (NULL);

	while (s[i])
	{
		res[i] = f(s[i]);
		i++;
	}

	return (res);
}