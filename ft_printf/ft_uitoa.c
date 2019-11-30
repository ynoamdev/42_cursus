/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:45:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/30 15:57:45 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		thefunlen(unsigned int n)
{
	int len;

	len = 0;
	while (n > 9 && ++len)
		n = n / 10;
	return (++len);
}

char	*ft_uitoa(unsigned int n)
{
	char	*ptr;
	int		i;

	i = thefunlen(n);
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
