/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:28:00 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/07 21:50:35 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdint.h>
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_conversions(char const *format, va_list args, int *printlen);
void	ft_print_di(int num, int *printlen);
void	ft_print_p(unsigned long long num, int *printlen);
void	ft_print_s(char *s, int *printlen);
void	ft_print_x(unsigned int num, int *printlen);
void	ft_print_u(unsigned int num, int *printlen);
void	ft_print_c(int c, int *printlen);
void	ft_print_larx(unsigned int num, int *printlen);

#endif