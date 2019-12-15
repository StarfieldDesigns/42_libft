
#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int res;

	sign = 1;
	res = 0;
	while (*str != '\0' && !(*str >= '0' && *str <= '9') && *str != '+' && *str != '-')
		str++;
	if (*str == '+')
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		res = (res * 10) + (*str - 48);
		str++;
	}
	res = res * sign;
	return (res);
}
