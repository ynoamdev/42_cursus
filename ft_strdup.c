/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:49:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/27 00:57:20 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptrcp;
	int		x;

	if (!(ptrcp = (char *)malloc(ft_strlen((char *)string) + 1)))
		return (NULL);
	x = ft_strlen((char *)string);
	while (x-- >= 0)
		ptrcp[x] = (char)string[x];
	return (ptrcp);
}
