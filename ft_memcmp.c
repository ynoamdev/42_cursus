/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 11:06:30 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/18 11:29:25 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *string1, const void *string2, size_t n)
{
	while (n--)
		if (*(char *)(string1++) != *(char *)(string2++))
			return (*(char *)(--string1) - *(char *)(--string2));
	return (0);
}
