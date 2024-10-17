/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 01:19:02 by jodougla          #+#    #+#             */
/*   Updated: 2024/10/17 05:19:16 by jodougla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

extern int	ft_printf(const char *str, ...)
	__attribute__((format(printf,1 , 0)));

int	ft_check_the_string(va_list ap, const char *str);
int	ft_printf(const char *str, ...);

#endif
