/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_finish2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:49:18 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/19 21:38:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_finish2(char *s, int space, int minus, char c)
{
	if (space < 0 && (minus = 1))
		space *= -1;
	if (c == 'c' && *s == '\0')
	{
		if (minus == 1 && write(1, "\0", 1))
			space = ft_putstr(ft_space(--space), 1);
		else if (minus != 1 && (space = ft_putstr(ft_space(--space), 1)))
			write(1, "\0", 1);
	}
	else
	{
		if (minus == -2 && space != 0 && s[0] == '0' && s[1] != 'x')
			space = ft_putstr(ft_strjoin(ft_space(space - 1), s), 0);
		else if (minus == 1 && space > (int)ft_strlen(s))
			space = ft_putstr(ft_strjoin(s, ft_space(space - ft_strlen(s))), 0);
		else if (space > (int)ft_strlen(s))
			space = ft_putstr(ft_strjoin(ft_space(space - ft_strlen(s)), s), 0);
		else
			space = ft_putstr(s, 0);
	}
	return (space);
}
