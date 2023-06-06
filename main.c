/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 18:26:55 by ekamada           #+#    #+#             */
/*   Updated: 2023/06/06 19:41:09 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"


int main(void)
{
    int printlen = 0;
/*     for (int i = 0; i < 1000; i++)
    {
        // printf("printf :%X ", i);
        ft_printf("ft_printf: %X\n", i);
    } */
    printlen = ft_printf("ft_printf: %d\n", 100);
    printf("%d", printlen);
    // ft_printf("ss", "abc", "def");
    // ft_printf("dfc", 50, 3.3, 'Z');
}