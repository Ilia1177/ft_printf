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
	len = printf(argv[1], argv[2]);
	ft_putendl_fd("", 1);
	len2 = ft_printf(argv[1], argv[2]);
	ft_putendl_fd("", 1);
	ft_printf("%d == %d", len, len2);
	
}
