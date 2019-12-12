/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:38:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/12 22:04:44 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
//#include <stdio.h>

int	main(void)
{
//	printf("%d\n", ft_printf("%thingd\n",5));
/*printf("%.s\n", "yn");
printf("%.d\n", 12);
printf("%.u\n", 12);
printf("%.x\n", 12);
printf("%.X\n", 12);
printf("%.p\n", &o);
printf("%.i\n", 12);
printf("%.c\n",'a');*/
//ft_printf("%9s\n", "yn");
int a, b;
//printf("|%8.-1s|\n", "youssef");
a = printf("|%0*.d|", -8, -42);
printf("\n");
b = ft_printf("|%0*.d|", -8 , -42);
printf("\nprintf = %d\nft_printf = %d\n",a, b);

//ft_printf("%-*.*d\n",-10,-5,42);
//ft_printf("%014.*d\n", 12, 12);
//ft_printf("%*d\n", 12, 12);

	//printf("%d\n", printf("%s", "test"));
	return (0);
}
