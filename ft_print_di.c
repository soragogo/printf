/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:54:57 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/07 22:02:31 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_di(int num, int *printlen)
{
	char	*ascii_num;

	ascii_num = ft_itoa(num);
	*printlen += write(1, ascii_num, ft_strlen(ascii_num));
	free(ascii_num);
}
