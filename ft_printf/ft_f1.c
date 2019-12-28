/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_f1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 17:20:51 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 11:53:24 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_f1(int sp, int zr, char p, char *s)
{
	long int	a;

	a = 0;
	if (p == 'd' || p == 'u' || p == 'i' || p == 'x' || p == 'X')
		a = ft_d_u_i(sp, zr, s);
	else if (p == 'p')
		a = ft_p(s, sp, zr);
	else if (p == 's')
		a = ft_s(s, sp, zr);
	else if (p == 'c')
		a = ft_c(s, sp);
	else if (p == '%')
		a = ft_mod(sp, zr);
	return (a);
}
