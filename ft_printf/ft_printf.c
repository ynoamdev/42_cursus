/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:38:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/08 16:12:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *p, ...)
{
	char	*s;
	va_list	ap;
	int		i;

	s = NULL;
	i = 0;
	va_start(ap, p);
	while (*p != '\0')
	{
		if (*p == '%' && p++)
		{
			if (*p == '%')
				s = ft_strjoin(s, ft_ctoa(*p++));
			else
				s = ft_all((char **)&p, ap);
		}
		else
			s = ft_strjoin(s, ft_ctoa(*p++));
	}
	va_end(ap);
	return (ft_putstr(s));
}
