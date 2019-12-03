/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:54:17 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/02 18:21:48 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_itox(unsigned int n, char c)
{
	char			*ptr;
	unsigned int	i;

	ptr = NULL;
	if (c != 'u')
		while (n > 0)
		{
			i = n % 16;
			if (i <= 15 && i >= 10 && (c == 'x' || c == 'p'))
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
