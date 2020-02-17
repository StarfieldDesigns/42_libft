
#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int num;

	num = (unsigned int)n;
	if (n < 0)
	{
		num = -num;
		ft_putchar('-');
	}
	if (num > 9)
	{ 
		ft_putnbr(((int)num / 10));
		ft_putchar(((int)num % 10) + '0');
	}
	else
		ft_putchar(((int)num % 10) + '0');
}
