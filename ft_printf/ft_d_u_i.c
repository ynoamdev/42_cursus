/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_u_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 20:03:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/22 20:09:43 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_d_u_i(int sp, int zr, char *s, char c)
{
	long int	a;
	int		minus;

	a = 0;
	minus = 0;
	if (sp >= 0)
		a += ft_space(sp - ( zr + (int)ft_strlen(s)));
	if (*s == '-' && (minus = 1) && ft_dlt_mns(s))
		a += write(1, "-", 1) + minus;
	a += ft_zero(zr - (int)ft_strlen(s));
	a += write(1, s, ft_strlen(s));
	if (sp < 0)
		a += ft_space((sp * -1) - a);
	a -= minus;
	return (a);
}
