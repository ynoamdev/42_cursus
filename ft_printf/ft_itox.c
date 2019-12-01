/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 18:54:17 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/01 20:58:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_itox(unsigned int n, char c)
{
	char			*ptr;
	char			*ptr2;
	unsigned int	i;

	ptr = ft_strdup("");
	ptr2 = ft_strdup("0x");
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
	if (c == 'p')
		ptr = ft_strjoin(ptr2, ptr);
	return (ptr);
}
