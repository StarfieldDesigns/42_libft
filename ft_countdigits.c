
#include "libft.h"

int		ft_countdigits(unsigned int n)
{
	int digits;

	digits = 1;
	while ((n /= 10) > 0)
		digits++;
	return (digits);
}
