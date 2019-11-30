/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addtop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 09:15:29 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/30 20:59:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_addtop(unsigned long int n)
{
	char				*ptr;
	char				*ptr2;
	char				*ptr3;
	unsigned long int	i;

	ptr = ft_strdup("");
	ptr2 = ft_strdup("0x");
	ptr3 = ft_strdup("0");
	if (n == 0)
		return (ptr = ft_strjoin(ptr2, ptr3));
	while (n > 0)
	{
		i = n % 16;
		if (i <= 15 && i >= 10)
			ptr = ft_strjoin(ft_ctoa((int)i + 87), ptr);
		else if (i <= 15 && i >= 10)
			ptr = ft_strjoin(ft_ctoa((int)i + 55), ptr);
		else
			ptr = ft_strjoin(ft_ctoa((int)i + 48), ptr);
		n /= 16;
	}
	ptr = ft_strjoin(ptr2, ptr);
	return (ptr);
}
