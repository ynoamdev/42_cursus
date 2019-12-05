/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:38:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/05 18:44:28 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libprintf.h"
#include <stdio.h>

int	main(void)
{
	char o = 'v';

//	printf("%d\n", ft_printf("%thingd\n",5));
/*printf("%.s\n", "yn");
printf("%.d\n", 12);
printf("%.u\n", 12);
printf("%.x\n", 12);
printf("%.X\n", 12);
printf("%.p\n", &o);
printf("%.i\n", 12);
printf("%.c\n",'a');*/
printf("%*d\n", 10, 10);
//ft_printf("%9s\n", "yn");
	//printf("%d\n", printf("%s", "test"));
	return (0);
}
