#include "include/ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	void *s;
	int	len;
	int len2;
	len = 0;
	len2 = 0;
	s = 0;
	len = printf("%p, %p\n", -ULONG_MAX, ULONG_MAX);
	len2 = ft_printf("%p, %p\n", -ULONG_MAX, ULONG_MAX);
	ft_printf("len: %i\n", len);
	ft_printf("len2 %i\n", len2);
	len += printf("PRINTF adresse(p) : %p\n", s);
	len += ft_printf("unsigned int(u) : %u\n", 15);
	len += ft_printf("hex int(x) : %x\n", 15);
	len += ft_printf("HEX INT(X) : %X\n", 15);
	len += ft_printf("char(c) : %c\n", '%');
	len += ft_printf("percent sign() : %%\n");
}
