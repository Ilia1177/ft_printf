/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:47:39 by npolack           #+#    #+#             */
/*   Updated: 2024/10/17 20:09:02 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = get_intlen(n, 10);
	ft_putnb_base(n, "0123456789");
	return (len);
}
