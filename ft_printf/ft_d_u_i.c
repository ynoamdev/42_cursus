/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_u_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:03:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/23 21:22:52 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_d_u_i(int sp, int zr, char *s, char c)
{
	long int	a;
	int		lenth;
	int		minus;

	a = 0;
	minus = 0;
	if (*s == '-')
		minus = 1;
	s = ft_dlt_mns(s);
	lenth = ft_strlen(s);
	if ((zr = (lenth + 1) - zr) < 0)
		zr = 0;
	if (sp > (zr + lenth + minus))
		a += ft_space(sp - (zr + lenth + minus));
	a += write(1, "-", 1);
	a += ft_zero(zr - lenth);
	a += write(1, s, lenth);
	if (sp < 0)
		a += ft_space(sp - a);
	return (a);
}
