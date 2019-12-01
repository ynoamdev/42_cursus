/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:57:19 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/01 21:43:10 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_convertion(char c, va_list ap)
{
	char *s;

	s = ft_strdup("");
	if (c == 'd' || c == 'i' || c == 'c')
		s = ft_strjoin(s, ft_itoa(va_arg(ap, int), c));
	else if (c == 's')
		s = ft_strjoin(s, ft_strdup(va_arg(ap, char*)));
	else if (c == 'p')
		s = ft_strjoin(s, ft_addtop(va_arg(ap, unsigned long int)));
	else if (c == 'x' || c == 'X' || c == 'u')
		s = ft_strjoin(s, ft_itox(va_arg(ap, unsigned int), c));
	else
		s = ft_strjoin(s, ft_ctoa(c));
	return (s);
}
