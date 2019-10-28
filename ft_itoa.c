/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 14:59:46 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 15:40:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	thefunlen(unsigned int copy)
{
	static int len;

	while (copy > 9)
	{
		copy = copy / 10;
		len++;
	}
	return (++len);
}

char		*ft_itoa(int n)
{
	char			*ptr;
	unsigned int	copy;
	int				i;
	static int		sign;

	if (n < 0)
	{
		copy = n * -1;
		sign = 1;
	}
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
