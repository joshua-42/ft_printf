/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 01:19:02 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/19 15:46:02 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdint.h>

# define INT_MIN "-2147483648"

int	ft_printf(const char *str, ...) __attribute__((format(printf, 1, 2)));

int	ft_printf(const char *str, ...);
int	ft_check_the_string(va_list ap, const char *str, int len);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putchar_hexa(unsigned int nb, int flag);
int	ft_putnbr_hexa(unsigned int nb, int flag);
int	ft_putunsigned_nbr(unsigned int nb);
int	count_num(int nb);
int	ft_putnbr(int nb);
int	ft_atoi_hexa(char *str);
int ft_putptr(unsigned long str);
int	ft_putnbr_mem(unsigned long nb , int flag);


#endif
