/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:31:44 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/20 22:46:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_substr(char const *string, unsigned int start, size_t lenth)
{
	char		*byby;
	size_t		x;

	byby = (char *)malloc(++lenth);
	if (byby == NULL)
		return (NULL);
	x = 0;
	while (x < lenth)
	{
		byby[x] = string[start + x];
		x++;
	}
	byby[--x] = 0;
	return (byby);
}
