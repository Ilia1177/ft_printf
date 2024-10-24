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
	write(1, "ORIGNIAL ", 9);
	len = printf("youpi%s", "NULL", "houpi", NULL, "AAA");
//	write(1, "\n", 1);
	write(1, "FT_MINE :", 9);
	len2 = ft_printf("youpi%s", "NULL", "houpa", "AAA");
//	write(1, "\n", 1);
//	write(1, "\n", 1);
//	write(1, "\n", 1);
	write(1, "\n", 1);
	write(1, "\n", 1);
	ft_printf("%d == %d", len, len2);	
}
