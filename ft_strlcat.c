/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 15:41:16 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/19 12:26:05 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		lenstring(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *distination, const char *source, size_t size)
{
	int dstlenth;
	int srclenth;
	int x;

	dstlenth = lenstring(distination);
	srclenth = lenstring((char *)source);
	if (dstlenth >= (int)size)
		return (lenstring((char *)source) + size);
	else
	{
		x = size - dstlenth - 1;
		distination += dstlenth;
		while (x--)
			*distination++ = *source++;
		*distination = '\0';
	}
	return (srclenth + dstlenth);
}
