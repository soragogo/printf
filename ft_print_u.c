/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:55:03 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/05 06:03:45 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *ft_unsigned_to_a(unsigned int num)
{
	unsigned long 	i;
	int j;

	char *ascii_num;

	ascii_num = malloc(sizeof(char) * 11);
	if (ascii_num == NULL)
		return (NULL);
	i = 1;
	j = 0;
	while (i < num)
		i *= 10;
	i /= 10;
	while (i > 0)
	{
		ascii_num[j] = num / i + '0';
		num = num % i;
		i /= 10;
		j ++;
	}
	ascii_num[j] = 0;
	return(ascii_num);
}


int ft_print_u(unsigned int num, int *printlen)
{
	char *ascii_num;

	ascii_num = ft_unsigned_to_a(num);
	printlen += write(1, ascii_num, ft_strlen(ascii_num));
	free(ascii_num);
	return (0);
}