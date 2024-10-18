/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:31:05 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/18 17:17:31 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int ft_putchar_hexa(unsigned int nb, int flag)
{
	(void) flag;
	char	*str_X = "0123456789ABCDEF";
	char	*str_x = "0123456789abcdef";
	if (flag == 1)	
		write(1, &str_X[nb], 1);
	else
		write(1, &str_x[nb], 1);
	return (1);
}

int	ft_putnbr_hexa(unsigned int nb , int flag)
{
	int	len;

	len = 0;
	if (nb >  15)
		len += ft_putnbr_hexa (nb >> 4, flag);
	len += ft_putchar_hexa(nb & 15, flag);
	return (len);
}
