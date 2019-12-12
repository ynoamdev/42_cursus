/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:49:18 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/12 20:44:54 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_finish2(char *s, int space, int minus)
{
	if (space < 0 && (minus = 1))
		space *= -1;
	if (minus == 1 && space > (int)ft_strlen(s))
		s = ft_strjoin(s, ft_space(space - ft_strlen(s)));
	else if (space > (int)ft_strlen(s))
		s = ft_strjoin(ft_space(space - ft_strlen(s)), s);
	return (s);
}
