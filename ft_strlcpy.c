/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:11:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/29 20:05:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *distination, const char *source, size_t size)
{
	int		ss;

	ss = ft_strlen(source);
	if (size)
	{
		while (*source && --size)
			*distination++ = *source++;
		*distination = '\0';
	}
	return (ss);
}
