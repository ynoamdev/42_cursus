/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:31:44 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/29 17:34:28 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t lenth)
{
	char		*byby;
	size_t		x;
	char		*backzero;
	char		back;

	back = '\0';
	backzero = &back;
	if (!(string) || ft_strlen(string) < (size_t)start)
		return (backzero);
	if (!(byby = (char *)malloc(lenth + 1)))
		return (NULL);
	x = -1;
	byby[lenth] = 0;
	while (++x < lenth)
		byby[x] = string[start + x];
	return (byby);
}
