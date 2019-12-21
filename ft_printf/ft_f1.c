/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:20:51 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/21 23:07:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_f1(int sp, int zr, char **ptr, va_list ap)
{
	char	c;
	char	*s;

	c = **ptr;
	s = ft_cnv(ptr, ap);
	if (ft_strlen(s) < zr && sp < 0 &&(c == 'd' || c == 'u' || c == 'i' ))
	{
		if (*s != '-')
		{
			zr = ft_zero(zr - ft_strlen(s));
			zr += write(1, s, ft_strlen(s));
			zr += ft_space(zr - (sp * -1));
		}
		else
		{
			write(1, "-", 1);
			zr = ft_zero(zr - ft_strlen(s));
			zr += ft_minus(s);
			zr += ft_space(zr - (sp * -1));
		}
	}
	else if (ft_strlen(s) < zr && sp >= 0 &&(c == 'd' || c == 'u' || c == 'i'))
	{
		sp = ft_zero(ft_space(sp - (zr - ft_strlen(s))));
	}
	return (zr);
}
