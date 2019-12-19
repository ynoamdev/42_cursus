/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:39:19 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/19 21:40:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_minus(char *s, int zero, int minus)
{
	int		i;
	int		j;
	char	*p;

	i = ft_strlen(s);
	j = -1;
	if (*s == '-')
	{
		while (++j < i)
			s[j] = s[j + 1];
		if (minus != -1)
			i = ft_strlen(s) - 1;
		s = ft_strjoin(ft_zero(zero - i + 1), s);
		s = ft_strjoin(ft_strdup("-"), s);
	}
	else
	{
		p = s;
		s = ft_strjoin(ft_zero(zero - i + 1), ft_strdup(s + 2));
		ft_free(&p);
		s = ft_strjoin(ft_strdup("0x"), s);
	}
	return (s);
}
