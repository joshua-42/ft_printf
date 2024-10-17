/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 01:18:46 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/17 05:39:14 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>

int	ft_check_the_string(va_list ap, const char *f_ptr)
{
	int	len;

	len = 0;
	while (*f_ptr)
	{
		if (*f_ptr == '%' && *f_ptr + 1 == 'c')
			len += ft_putchar(va_arg(ap, char));
		if (*f_ptr == '%' && *f_ptr + 1 == 's')
			len += ft_putstr(va_arg(ap, char *));
		if (*f_ptr == '%' && *f_ptr + 1 == 'p')
			len += ft_putvoidpointer(va_arg(ap, void *));
		if (*f_ptr == '%' && *f_ptr + 1 == 'd')
			len += ft_putnbr(va_arg(ap, int));
		if (*f_ptr == '%' && *f_ptr + 1 == 'i')
			len += ft_putnbr(va_arg(ap, int));
		if (*f_ptr == '%' && *f_ptr + 1 == 'u')
			len += ft_putnbr(va_arg(ap, unsigned int));
		if (*f_ptr == '%' && *f_ptr + 1 == 'x')
			len += ft_putnbr_base(va_arg(ap, char *));
		if (*f_ptr == '%' && *f_ptr + 1 == 'X')
			len += ft_putnbr_base(va_arg(ap, char *));
		if (*f_ptr == '%' && *f_ptr + 1 == '%')
			len += ft_putchar(va_arg(ap, char));
		f_ptr++;
		f_ptr++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	const char	*f_str;
	va_list		ap;
	int			len;

	f_str = str;
	va_start(ap, str);
	len = 0;
	ft_check_the_string
	return (len);
}

int	main()
{
	ft_printf("salut comment ca va", "hola");
}
