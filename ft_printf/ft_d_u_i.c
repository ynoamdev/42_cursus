/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_u_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:03:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 19:28:32 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_d_u_i(int sp, int zr, char *s)
{
	long int	a;
	int		lenth;
	int		minus;

	a = 0;
	minus = 0;
	if (*s == '-')
		minus = 1;
	if (*s == '0' && zr == -1)
		s[0] = 0;
	lenth = ft_strlen(s);
	if (sp == 0 && zr > 0)
		zr--;
	if ((zr = zr - lenth + minus) < 0)
		zr = 0;
	a += ft_space(sp - (zr + lenth));
	if (minus == 1)
		a += write(1, "-", 1);
	a += ft_zero(zr);
	if (minus == 1)
		a += write(1, &s[1], lenth - 1);
	else
		a += write(1, s, lenth);
	if (sp < 0)
		a += ft_space((sp * -1) - a);
	return (a);
}
