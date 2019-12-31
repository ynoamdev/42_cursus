/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:45:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 21:09:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_uitoa(unsigned int n)
{
	char	*ptr;
	int		i;

	i = ft_intlen(n);
	if (!(ptr = malloc(i + 1)))
		return (NULL);
	ptr[i] = '\0';
	while (n > 9)
	{
		ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	ptr[--i] = n + 48;
	return (ptr);
}
