/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/19 22:41:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_all(char **ptr, va_list ap, int space, int zero)
{
	int		minus;
	int		z;

	z = 0;
	if (ft_is_flage(**ptr) && (minus = -2))
	{
		while (ft_is_flage(**ptr))
			if (**ptr == '-' && (minus = 1) && (*ptr)++)
				space = ft_atoi(ptr, ap);
			else if (**ptr == '.' && (*ptr)++ && (minus = -1))
				zero = ft_atoi(ptr, ap);
			else if (**ptr == '0' && (*ptr)++ && (z = 1)
					&& (zero = ft_atoi(ptr, ap)))
				(**ptr == '.' && (minus = -1))
					? (space = zero) : (1);
			else if (ft_isdigit(**ptr) || **ptr == '*')
				space = ft_atoi(ptr, ap);
		if (z == 1 && zero < 0 && (space = zero))
			space = 0;
		space = ft_finish2(ft_finish1(ft_convertion(ptr, ap, 0),
					zero, **ptr, minus), space, minus, **ptr);
	}
	else
		space = ft_putstr(ft_convertion(ptr, ap, 1), 0);
	(*ptr)++;
	return (space);
}
