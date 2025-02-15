/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npolack <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:00:57 by npolack           #+#    #+#             */
/*   Updated: 2024/10/14 19:49:00 by npolack          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	if (!dest && !src)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	i = -1;
	if (d >= s && d <= s + n)
	{
		i = (int) n;
		while (--i >= 0)
			d[i] = s[i];
	}
	else
		while (++i < (int)n)
			d[i] = s[i];
	return (dest);
}
