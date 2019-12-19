
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char *join;
	int i, j;

	join = (char*)malloc((ft_strlen(s1) + ft_strlen(s2)) - 1);
	i = 0;
	j = 0;

	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	
	join[j] = '\0';
	return (join);
}