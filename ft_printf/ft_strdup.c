/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:50:52 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/29 21:04:11 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *string)
{
	char	*ptrcp;
	int		x;

	x = ft_strlen((char*)string) + 1;
	if (!(ptrcp = (char *)malloc(x)))
		return (NULL);
	while (x-- > 0)
		ptrcp[x] = (char)string[x];
	return (ptrcp);
}
