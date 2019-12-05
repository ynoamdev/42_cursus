/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/05 15:52:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_all(char **ptr, va_list ap)
{
	char	*s;
	char	*p;
	int		space;
	int		zero;
	int		dot;

	s = ft_strdup("");
	space = 0;
	zero  = 0;
	dot   = 0;
	p = *ptr;
	if (ft_is_flage(**ptr))
	{
		s = ft_find_conv(*ptr, ap);
		while(ft_is_flage(**ptr))
		{
			if (ft_isdigit(**ptr) && **ptr != '0')
				space = space + (**ptr - 48);
			else if(**ptr == '.' && *ptr++ && (dot = 1))
				zero = zero + (**ptr - 48);
			else if(ft_isdigit(**ptr) && **ptr == '0')
				zero = zero + (**ptr - 48);
			*ptr = *ptr + 1;
		}
	}
	else
		s = ft_strjoin(s, ft_convertion(**ptr, ap));
	return (s);
}
