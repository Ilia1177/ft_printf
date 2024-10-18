/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:07:17 by npolack           #+#    #+#             */
/*   Updated: 2024/10/17 20:29:41 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_parse(va_list args, const char *s)
{
	int count_print;

	count_print = 0;
	if (*s == 'c')
		count_print = ft_print_char(va_arg(args, int));
	if (*s == 's')
		count_print = ft_print_str(va_arg(args, char *));
	if (*s == 'd' || *s == 'i')
		count_print = ft_print_dec(va_arg(args, int));
	if (*s == 'p')
		count_print = ft_print_address(va_arg(args, unsigned long));
	if (*s == 'u')
		count_print = ft_print_unsigned(va_arg(args, unsigned int));
	if (*s == 'x')
		count_print = ft_print_hex(va_arg(args, int), 0);
	if (*s == 'X')
		count_print = ft_print_hex(va_arg(args, int), 1);
	if (*s == 37)
		count_print = ft_print_char(37);
	return (count_print);
}
