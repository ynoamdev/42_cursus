/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:54:17 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/13 20:47:21 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_itox(unsigned int n, char c)
{
	char			*ptr;
	unsigned int	i;

	ptr = NULL;
	if (n == 0)
		ptr = ft_ctoa('0');
	if (c != 'u')
		while (n > 0)
		{
			i = n % 16;
			if (i <= 15 && i >= 10 && c == 'x')
				ptr = ft_strjoin(ft_ctoa((int)i + 87), ptr);
			else if (i <= 15 && i >= 10 && c == 'X')
				ptr = ft_strjoin(ft_ctoa((int)i + 55), ptr);
			else
				ptr = ft_strjoin(ft_ctoa((int)i + 48), ptr);
			n /= 16;
		}
	else
		ptr = ft_uitoa(n);
	return (ptr);
}
