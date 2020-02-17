
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	num = (unsigned int)n;
	if (n < 0)
	{
		num = -num;
		ft_putchar_fd('-', fd);
	}
	if (num > 9)
	{
		ft_putnbr_fd((int)num / 10, fd);
		ft_putchar_fd(((int)num % 10) + '0', fd);
	}
	else
		ft_putchar_fd(((int)num % 10) + '0', fd);
}
