/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:55:01 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/07 20:11:04 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_s(char * s, int *printlen)
{
	if (s == NULL)
	{
		*printlen += write(1, "(null)", 6);
		return (0);
	}
	*printlen += write(1, s, strlen(s));
	return (0);
}