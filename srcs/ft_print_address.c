/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:52:17 by npolack           #+#    #+#             */
/*   Updated: 2024/10/17 21:25:34 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"
static void	ft_put_address(unsigned long num, char *base)
{
	unsigned char 	c;
	int 			baselen;

	baselen = ft_strlen(base);
	if (num >= (unsigned long)baselen)
		ft_put_address(num / baselen, base);
	c = base[num % baselen];
	write(1, &c, 1);
}
int	get_intlen_address(unsigned long num, int baselen)
{
	int			len;

	len = 1;
	num = n;
	while (num >= baselen)
	{
		len++;
		num = num / baselen;
	}
	return (len);
}

static int	ft_print_address(unsigned long n)
{
	int	len;

	if (n == 0)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	if ((long)n == LONG_MIN)
	{
		write(1, "0x8000000000000000", 18);
		return (18);
	}
	len = get_intlen_address(n, 16);
	len += ft_print_str("0x");
	ft_put_address(n, "0123456789abcdef");
	return (len);
}
