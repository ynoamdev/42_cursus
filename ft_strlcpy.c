/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:11:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/18 19:34:45 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		len(char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *distination, const char *source, size_t size)
{
	size_t	lenth;
	int		ss;

	ss = len((char *)source);
	lenth = size - 1;
	while (lenth--)
		*distination++ = *source++;
	*distination = '\0';
	return (ss);
}
