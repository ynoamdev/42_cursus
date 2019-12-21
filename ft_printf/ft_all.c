/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/21 21:30:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_all(char **ptr, va_list ap)
{
	int		space; 
	int 	zero;
	int		dot;
	int		z;
	
	ft_init(&space, &zero, &dot);
	if (ft_is_flage(**ptr))
	{
		while (ft_is_flage(**ptr))
			if (**ptr == '.' && (*ptr)++ && (dot = 1))
				zero = ft_atoi(ptr, ap);
			else if (**ptr == '0' && (zero = ft_atoi(ptr, ap)))
				if ((dot = 2) && **ptr == '.')
					space = zero;
			else if (**ptr == '-' || ft_isdigit(**ptr) || **ptr == '*')
				space = ft_atoi(ptr, ap);
		ft_change(&space, &zero, &dot, **ptr);
		space = ft_f1(space, zero, ptr, ap);
	}
	else
		space = ft_putstr(ft_cnv(ptr, ap), 0);
	(*ptr)++;
	return (space);
}
