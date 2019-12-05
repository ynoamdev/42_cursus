/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/05 19:04:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_all(char **ptr, va_list ap)
{
	char	*s;
	int		space;
	int		zero;
	int		dot;
	int		menus;

	s = ft_strdup("");
	space = 0;
	zero = 0;
	dot = 0;
	menus = 0;
	if (ft_is_flage(**ptr))
	{
		s = ft_find_conv(*ptr, ap);
		while (ft_is_flage(**ptr))
		{
			if (ft_isdigit(**ptr) && **ptr != '0')
				space +=  (**ptr - 48);
			else if(**ptr == '*')
				(**(ptr - 1) != '0') ? (space += va_arg(ap, int)) : (zero += va_arg(ap, int));
			else if (**ptr == '.' || **ptr == '-')
				(**ptr == '-') ? (menus = 1) : (dot = 1);
			else if (ft_isdigit(**ptr) && **ptr == '0' && *ptr++ && (dot = 1))
				zero += (**ptr - 48);
			*ptr += 1;
		}
	}
	else
		s = ft_strjoin(s, ft_convertion(**ptr, ap));
	return (s);
}
