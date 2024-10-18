/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:36:08 by npolack           #+#    #+#             */
/*   Updated: 2024/10/17 19:39:26 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int ft_printf(const char *s, ...)
{
	va_list	args;
	int		print_len;

	va_start(args, s);
	print_len = 0;
	while(*s)
	{
		if (*s == '%')
		{
			if(s)
				s++;
			print_len += ft_parse(args, s);
			if (s)
				s++;
		}	
		else
		{
			ft_putchar_fd(*s, 1);
			print_len++;
			s++;
		}
	}
	va_end(args);
	return (print_len);
}


