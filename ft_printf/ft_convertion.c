/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:57:19 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/19 21:32:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_convertion(char **c, va_list ap, int var)
{
	char	*s;
	int		i;

	s = NULL;
	if ((**c == 'd' || **c == 'i' || **c == 'c'))
	{
		i = va_arg(ap, int);
		if (**c == 'c' && i == 0)
			if (var == 1)
				write(1, "\0", 1);
			else
				s = ft_strdup("");
		else
			s = ft_itoa(i, **c);
	}
	else if (**c == 's')
		(s = va_arg(ap, char*))
			? (s = ft_strjoin(ft_strdup(""), ft_strdup(s))) :
			(s = ft_strdup("(null)"));
	else if (**c == 'p')
		s = ft_addtop(va_arg(ap, unsigned long int));
	else if (**c == 'x' || **c == 'X' || **c == 'u')
		s = ft_itox(va_arg(ap, unsigned int), **c);
	return ((**c == '%') ? (s = ft_strjoin(ft_ctoa('%'), s)) : s);
}
