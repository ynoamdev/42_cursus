/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/08 16:47:26 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_all(char **ptr, va_list ap)
{
	char	*s;
	int		space;
	int		zero;
	int		dot;
	int		minus;

	s = NULL;
	space = 0;
	zero = 0;
	dot = 0;
	minus = 0;
	if (ft_is_flage(**ptr))
	{
		while (!(s = ft_convertion(**ptr, ap)))
		{
			if (**ptr == '.' && (*ptr = *ptr + 1))
				(**ptr == '*' && (*ptr = *ptr + 1)) ? (zero += va_arg(ap, int)) : (zero += ft_atoi(ptr));
			/*
			else if (**ptr == '*')
				(space) ? (space += va_arg(ap, int)) : (zero += va_arg(ap, int));
			else if (ft_isdigit(**ptr) && **ptr != '0' && !dot && !zero)
				space = ft_atoi(*ptr);
			else if (ft_isdigit(**ptr) && **ptr == '0' && (*ptr)++)
				zero = ft_atoi(*ptr);
				*/
		}
		s = ft_strjoin(ft_zero(zero - ft_strlen(s)), s);
	}
	else
		s = ft_strjoin(s, ft_convertion(**ptr, ap));
	*ptr = *ptr + 1;
	return (s);
}
