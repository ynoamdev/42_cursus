/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 16:00:42 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/05 15:49:59 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_find_conv(char *ptr, va_list ap)
{
	char	*s;

	while (*ptr != 'd' && *ptr != 'i' && *ptr != 'c' && *ptr != 's'
			&& *ptr != 'p' && *ptr != 'x' && *ptr != 'X' && *ptr != 'u')
		ptr++;
	s = ft_convertion(*ptr, ap);
	return (s);
}
