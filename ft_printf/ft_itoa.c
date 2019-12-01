/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:59:46 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/01 20:58:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	thefunlen(unsigned int copy)
{
	int len;

	len = 0;
	while (copy > 9 && ++len)
		copy = copy / 10;
	return (++len);
}

char		*ft_itoa(int n, int c)
{
	char			*ptr;
	unsigned int	copy;
	int				i;
	int				sign;

	if (c == 'c')
		return (ft_ctoa(n));
	sign = 0;
	if (n < 0 && ++sign)
		copy = n * -1;
	else
		copy = n;
	i = thefunlen(copy);
	if (!(ptr = malloc(i + sign + 1)))
		return (NULL);
	ptr[i + sign] = '\0';
	while (copy > 9)
	{
		ptr[--i + sign] = (copy % 10) + 48;
		copy /= 10;
	}
	ptr[--i + sign] = copy + 48;
	if (n < 0)
		ptr[--i + sign] = '-';
	return (ptr);
}
