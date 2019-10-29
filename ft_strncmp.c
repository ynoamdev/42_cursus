/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:38:07 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/29 22:05:17 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	while (n-- && !string1 && !string2)
	{
		if (*string1 != *string2)
			return (*(unsigned char *)string1 - *(unsigned char *)string2);
		string1++;
		string2++;
	}
	return (0);
}
