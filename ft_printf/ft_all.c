/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/12 21:52:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_all(char **ptr, va_list ap)
{
	char	*s;
	int		space;
	int		zero;
	int		minus;

	s = NULL;
	space = 0;
	zero = 0;
	minus = 0;
	if (ft_is_flage(**ptr))
	{
		while (!(s = ft_convertion(ptr, ap)))
		{
			if (**ptr == '-' && (*ptr)++)
				minus = 1;
			else if (**ptr == '.' && (*ptr)++)
				(**ptr == '*' && (*ptr)++) ? (zero = va_arg(ap, int))
					: (zero = ft_atoi(ptr));
			else if (**ptr == '*' && (*ptr)++)
				space = va_arg(ap, int);
			else if (**ptr == '0' && (zero = ft_atoi(ptr)))
				(**ptr == '.') ? (space = zero) : (1);
			else if (ft_isdigit(**ptr))
				space = ft_atoi(ptr);
		}
		s = ft_finish1(s, zero, **ptr);
		s = ft_finish2(s, space, minus);
	}
	else
		s = ft_strjoin(s, ft_convertion(ptr, ap));
	return (s);
}
