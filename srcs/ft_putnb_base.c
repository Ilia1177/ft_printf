#include "../include/ft_printf.h"
#include "../libft/libft.h"

void	ft_putnb_base(long long n, char *base)
{
	unsigned char 	c;
	long long		num;
	int 			baselen;

	num = n;
	baselen = ft_strlen(base);
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	if (num >= baselen)
		ft_putnb_base(num / baselen, base);
	c = base[num % baselen];
	write(1, &c, 1);
}
