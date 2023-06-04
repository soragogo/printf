/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 21:51:37 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/05 05:50:12 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_conversions(char const *format, va_list args, int *printlen)
{
	if (*format == 'c')
		ft_print_c(va_arg(args, int), printlen);
	else if (*format == 's')
		ft_print_s(va_arg(args, char *), printlen);
	// else if (*format == 'p')
	// 	ft_print_p(va_arg(args, unsigned long long), printlen);
	else if (*format == 'd' || *format == 'i')
		ft_print_di(va_arg(args, int), printlen);
	else if (*format == 'u')
		ft_print_u(va_arg(args, unsigned int), printlen);
	//else if (*format == 'x')
	// 	ft_print_x(va_arg(args, unsigned int), printlen);
	//else if (*format == 'X')
	// 	ft_print_larx(va_arg(args, unsigned int), printlen);
	
}