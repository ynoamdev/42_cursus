/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_u_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:03:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 20:54:58 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_d_u_i(int sp, int zr, char *s)
{
	int	a;
	int	lenth;
	int	minus;

	ft_init(&a, &minus);
	(*s == '-') ? minus = 1 : 1;
	if (sp == 0 && zr < 0)
		(minus == 1) ? zr = ((zr * -1) - 1)
			: (zr *= -1);
	(*s == '0' && zr != -1) ? s[0] = 0 : 1;
	lenth = ft_strlen(s);
	((zr = zr - lenth + minus) < 0) ? zr = 0 : 1;
	a += ft_space(sp - (zr + lenth));
	(minus == 1) ? a += write(1, "-", 1) : 1;
	a += ft_zero(zr);
	if (minus == 1)
		a += write(1, &s[1], lenth - 1);
	else
		a += write(1, s, lenth);
	(sp < 0) ? a += ft_space((sp * -1) - a) : 1;
	return (a);
}
