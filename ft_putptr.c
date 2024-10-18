/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:09:37 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/18 19:48:25 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putptr(uintptr_t *str)
{
	int	len;

	if (!str)
		return (0);
	len = 2;
	write (1, "0x", 2);
	len += ft_putnbr_mem(*str, 'x');
	return (len);
}

int	ft_putnbr_mem(uintptr_t str , int flag)
{
	int	len;

	len = 0;
	if (str >  15)
		len += ft_putnbr_hexa (str >> 4, flag);
	len += ft_putchar_hexa(str & 15, flag);
	return (len);
}
