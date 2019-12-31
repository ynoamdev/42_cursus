/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 15:10:12 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 14:45:23 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_s(char *s, int sp, int zr)
{
	int	a;
	int	lenth;

	a = 0;
	lenth = ft_strlen(s);
	if (lenth > zr && zr >= 0)
		s[zr] = '\0';
	lenth = ft_strlen(s);
	if (sp > 0)
		a += ft_space(sp - lenth);
	a += write(1, s, lenth);
	if (sp < 0)
	{
		sp = sp * -1;
		a += ft_space(sp - lenth);
	}
	return (a);
}
