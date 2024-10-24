/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:36:08 by npolack           #+#    #+#             */
/*   Updated: 2024/10/23 11:06:20 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len;

	va_start(args, s);
	len = 0;
	while (*s)
	{
		if (*s == '%')
		{
			len += ft_parse(args, ++s);
			if (*s)
				s++;
			else
			{
				len = -1;
				break ;
			}
		}
		else
			len += ft_print_char(*s++);
	}
	va_end(args);
	return (len);
}
