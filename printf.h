/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:28:00 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/06 19:39:39 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

void	ft_conversions(char const *format, va_list args, int *printlen);

int	ft_printf(const char *format, ...);
// int ft_print_di(int num, int *printlen);
// // int ft_print_p(unsigned long long num, int *printlen);
// int ft_print_s(char *s, int *printlen);
int ft_print_x(unsigned int num, int *printlen);
// int ft_print_u(unsigned int num, int *printlen);
// int ft_print_c(int c, int *printlen);
int ft_print_larx(unsigned int num, int *printlen);


#endif