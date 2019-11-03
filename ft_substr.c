/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:31:44 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/30 20:21:26 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t lenth)
{
	char	*baby;
	int	x;

	if (start > ft_strlen(string))
		lenth = 0;
	if (!(baby = malloc(lenth + 1)))
		return (NULL);
	x = 0;
	while (lenth-- && string[start + x] != 0)
	{
		baby[x] = string[start + x];
		x++;
	}
	baby[x] = '\0';
	return (baby);
}
