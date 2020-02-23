/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:31:44 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/05 20:52:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t lenth)
{
	char	*baby;
	size_t	x;

	if (string == NULL)
		return (NULL);
	if (start > ft_strlen(string))
		lenth = 0;
	if (!(baby = malloc(lenth + 1)))
		return (NULL);
	x = 0;
	while (x < lenth)
	{
		baby[x] = string[start + x];
		x++;
	}
	baby[x] = '\0';
	return (baby);
}
