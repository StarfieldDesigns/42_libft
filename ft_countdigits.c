
#include "libft.h"

int		count_digits(unsigned int n)
{
	int digits;

	digits = 1;
	while ((n /= 10) > 0)
		digits++;
	return (digits);
}
