#include "../include/ft_printf.h"

int	get_intlen(long long n, int baselen)
{
	long long	num;
	int			len;

	len = 1;
	num = n;
	if (n < 0)
	{
		num *= -1;
		len++;
	}
	while (num >= baselen)
	{
		len++;
		num = num / baselen;
	}
	return (len);
}
