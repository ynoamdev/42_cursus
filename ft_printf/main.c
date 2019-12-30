/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 13:47:43 by keddib            #+#    #+#             */
/*   Updated: 2019/12/30 21:48:06 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"
#define S2 "|%-p|", (void *)0 
#define S1 "|%*p|",0, (void *)0 

int main(void)
{
	printf("%d\n", ft_printf(S1));
	printf("%d\n", printf(S1));
	printf("%d\n", ft_printf(S2));
	printf("%d\n", printf(S2));
}



