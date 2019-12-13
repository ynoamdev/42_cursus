/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:39:19 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/13 12:28:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_minus(char *s, int zero)
{
	int		i;
	int		j;

	i = ft_strlen(s);
	j = 0;
	while (j < i)
	{
		s[j] = s[j + 1];
		j++;
	}
	s = ft_strjoin(ft_zero(zero - i), s);
	s = ft_strjoin(ft_strdup("-"), s);
	return (s);
}
