/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 21:14:29 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 14:49:20 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_changem(char **p, va_list ap)
{
	int c1;
	int j;

	j = 0;
	c1 = 0;
	if (**p == '-' && (*p)++)
		j = 2;
	if (**p == '0' && (*p)++)
		j = 1;
	if (**p == '*' && (*p)++)
		c1 = va_arg(ap, int);
	while (**p >= '0' && **p <= '9')
	{
		c1 = (c1 * 10) + **p - 48;
		(*p)++;
	}
	if (c1 < 0 && (j = 2))
		c1 = -c1;
	while (ft_is_flage(**p))
		(*p)++;
	(*p)++;
	return (the_output(c1 - 1, j));
}

int	the_output(int c1, int j)
{
	int i;
	int a;

	i = 32;
	a = 0;
	if (j == 1)
		i = 48;
	else if (j == 2)
		a += write(1, "%", 1);
	while (c1 >= 0 && c1--)
		a += write(1, &i, 1);
	if (j != 2)
		a += write(1, "%", 1);
	return (a);
}
