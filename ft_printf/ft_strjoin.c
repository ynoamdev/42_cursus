/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 21:54:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/01 21:07:56 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

char	*ft_strjoin(char *string1, char *string2)
{
	char	*thenew;
	size_t	i;
	size_t	j;

	i = ft_strlen(string1);
	j = ft_strlen(string2);
	if (!(thenew = malloc(i + j + 1)))
		return (NULL);
	thenew[i + j] = 0;
	while (j--)
		thenew[i + j] = string2[j];
	while (i--)
		thenew[i] = string1[i];
	ft_free(&string1);
	ft_free(&string2);
	return (thenew);
}
