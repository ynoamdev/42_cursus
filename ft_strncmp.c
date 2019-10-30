/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:38:07 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/30 16:51:53 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	if (n == 0)
		return (0);
	if ((!*string1 || !*string2) && n)
		return (*(unsigned char *)string1 - *(unsigned char *)string2);
	while (n--)
	{
		if (*string1 != *string2 || !*string1 || !*string2)
			return (*(unsigned char *)string1 - *(unsigned char *)string2);
		string1++;
		string2++;
	}
	return (0);
}
