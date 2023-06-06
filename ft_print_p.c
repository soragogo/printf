/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 22:54:59 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/06 21:53:58 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int		hexa_digit_count(unsigned long long num)
{
	int		digit_count;

	digit_count = 0;
	while(num > 0)
	{
		num /= 16;
		digit_count ++;
	}
	return (digit_count);
}

static char	*dicimal_to_hexa(unsigned long long num)
{
	char	*ascii_num;
	int		digit_count;
	int		i;

	digit_count = hexa_digit_count(num) + 1;
	ascii_num = malloc(sizeof(char) * digit_count);
	if (ascii_num == NULL)
		return (NULL);
	i = 0;
	i = digit_count - 2;
	while(num > 0)
	{
		if (num % 16 < 10)
			ascii_num[i--] = num % 16 + '0';
		else
			ascii_num[i--] = num % 16 +  87;
		num /= 16;
	}
	ascii_num[digit_count - 1] = '\0';
	return (ascii_num);
}


int	ft_point_hexi(unsigned long long num, int *printlen)
{
	char	*ascii_num;

	if (num == 0)
	{
		ascii_num = "0";
		*printlen += write(1, ascii_num, 3);
		return (0);
	}
	ascii_num = dicimal_to_hexa(num);
	if (ascii_num == NULL)
		return (0);
	*printlen += write(1, ascii_num, ft_strlen(ascii_num));
	free(ascii_num);
	return (0);
}

void ft_print_p(unsigned long long num, int *printlen)
{
	uintptr_t	address;

	address = (uintptr_t)&num;
	ft_point_hexi(address, printlen);
}