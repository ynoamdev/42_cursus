/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:44:48 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/23 20:55:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_atoi(char **str, va_list ap)
{
	long int 	number;
	int			sign;

	number = 0;
	sign = 1;
	while (**str == '-' && (*str)++)
		sign = -1;
	if (**str == '*' && (*str)++)
		number = va_arg(ap, int);
	else
	{
		if (**str == '0')
			(*str)++;
		while (**str >= 48 && **str <= 57)
		{
			number = (number * 10) + **str - 48;
			(*str)++;
		}
	}
	if (number > MAX_INT)
		number = 0;
	if (number < 0 && sign == -1)
		sign = 1;
	return (number * sign);
}
