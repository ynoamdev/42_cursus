/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:44:48 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/13 11:51:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_atoi(char **str, va_list ap)
{
	long int number;

	number = 0;
	if (**str == '*')
		number = va_arg(ap, int);
	while (**str >= 48 && **str <= 57)
	{
		number = (number * 10) + **str - 48;
		(*str)++;
	}
	if (number > MAX_INT)
		number = 0;
	return (number);
}
