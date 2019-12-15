
#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9)' && (c >= 'A' && <= 'Z') && (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
