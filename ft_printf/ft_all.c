/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/15 15:27:40 by ynoam            ###   ########.fr       */
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
			minus = -2;
			if (**ptr == '-' && (minus = 1) && (*ptr)++)
				space = ft_atoi(ptr, ap);
			else if (**ptr == '.' && (*ptr)++ && (minus = -1))
				zero = ft_atoi(ptr, ap);
			else if (**ptr == '0' && (*ptr)++ && (zero = ft_atoi(ptr, ap)))
				(**ptr == '.' && (minus = -1)) ? (space = zero) : (1);
			else if (ft_isdigit(**ptr) || **ptr == '*')
				space = ft_atoi(ptr, ap);
		}
		s = ft_finish1(s, zero, **ptr, minus);
		s = ft_finish2(s, space, minus);
	}
	else
		s = ft_strjoin(s, ft_convertion(ptr, ap));
	(*ptr)++;
	return (s);
}
