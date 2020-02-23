/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:49:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/29 20:02:50 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptrcp;
	int		x;

	x = ft_strlen(string) + 1;
	if (!(ptrcp = (char *)malloc(x)))
		return (NULL);
	while (x-- > 0)
		ptrcp[x] = (char)string[x];
	return (ptrcp);
}
