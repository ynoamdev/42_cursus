/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/18 15:39:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_all(char **ptr, va_list ap)
{
	int		space;
	int		zero;
	int		minus;

	space = 0;
	zero = 0;
	minus = -2;
	if (ft_is_flage(**ptr))
	{
		while (ft_is_flage(**ptr))
		{
			if (**ptr == '-' && (minus = 1) && (*ptr)++)
				space = ft_atoi(ptr, ap);
			else if (**ptr == '.' && (*ptr)++ && (minus = -1))
				zero = ft_atoi(ptr, ap);
			else if (**ptr == '0' && (*ptr)++ && (zero = ft_atoi(ptr, ap)))
				(**ptr == '.' && (minus = -1)) ? (space = zero) : (1);
			else if (ft_isdigit(**ptr) || **ptr == '*')
				space = ft_atoi(ptr, ap);
		}
		space = ft_finish2(ft_finish1(ft_convertion(ptr, ap), zero, **ptr, minus), space, minus);
	}
	else
		space = ft_putstr(ft_convertion(ptr, ap), 0);
	(*ptr)++;
	return (space);
}
