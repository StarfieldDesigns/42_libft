
#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	char **list;

	if (!(list = (char**)malloc(sizeof(char*) * (ft_wordcount(s, c)) + 1)))
		return (NULL);
	
}