/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:33:25 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/07 19:52:50 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	int printlen;

	printlen = 0;
	while (*format)
	{
		while(*format && *format != '%')
		{
			printlen += write(1, format, 1);
			format++;
			
		}
		if (*format == '%')
		{
			format ++;
			if (ft_strchr("cspdiuxX", *format) != NULL)
				ft_conversions(format, args, &printlen);
			else
				printlen += write(1, format, 1);
			format ++;
		}	
	}
	return (printlen);
}