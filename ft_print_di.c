/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:54:57 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/06 19:43:44 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int ft_print_di(int num, int *printlen)
{
	char *ascii_num;

	ascii_num = ft_itoa(num);
	printf("%s", ascii_num);
	printlen += write(1, ascii_num, ft_strlen(ascii_num));
	return (0);
}