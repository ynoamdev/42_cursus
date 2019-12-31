/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 13:09:01 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 14:44:18 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_p(char *s, int sp, int zr)
{
	int lenth;
	int a;

	a = 0;
	if (s[2] == '0' && (sp == 0 || zr == 0))
		s[2] = '\0';
	lenth = strlen(s);
	zr++;
	zr--;
	if (sp > 0)
		a += ft_space(sp - lenth);
	a += write(1, s, lenth);
	if (sp < 0)
		a += ft_space((sp * -1) - lenth);
	return (a);
}
