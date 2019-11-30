/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:38:47 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/30 21:27:23 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *p, ...)
{
	char	*s;
	va_list	ap;

	s = ft_strdup("");
	va_start(ap, p);
	while (*p != '\0')
	{
		if (*p++ == '%')
		{
			if (*p == 'd' || *p == 'i' || *p == 'c')
				s = ft_strjoin(s, ft_itoa(va_arg(ap, int), *p));
			else if (*p == 's')
				s = ft_strjoin(s, va_arg(ap, char*));
			else if (*p == 'p')
				s = ft_strjoin(s, ft_addtop(va_arg(ap, unsigned long int)));
			else if (*p == 'x' || *p == 'X' || *p == 'u')
				s = ft_strjoin(s, ft_itox(va_arg(ap, unsigned int), *p));
			else
				s = ft_strjoin(s, ft_ctoa(*p));
		}
		else
			s = ft_strjoin(s, ft_ctoa(*p));
	}
	va_end(ap);
	return (ft_putstr(s));
}
