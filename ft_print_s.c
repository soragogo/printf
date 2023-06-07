/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:55:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/07 21:46:12 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char *s, int *printlen)
{
	if (s == NULL)
		*printlen += write(1, "(null)", 6);
	else
		*printlen += write(1, s, strlen(s));
}
