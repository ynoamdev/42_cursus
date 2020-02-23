/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:47:18 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/05 17:56:29 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *string1, char const *string2)
{
	char	*thenew;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (string1 == NULL || string2 == NULL)
		return (ft_strdup(""));
	i = ft_strlen(string1);
	j = ft_strlen(string2);
	if (!(thenew = (char *)malloc(i + j + 1)))
		return (NULL);
	thenew[i + j] = 0;
	while (j--)
		thenew[i + j] = string2[j];
	while (i--)
		thenew[i] = string1[i];
	return (thenew);
}
