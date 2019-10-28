/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:08:28 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 23:18:29 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *distination, const void *source, size_t len)
{
	char		*pdst;
	const char	*psrc;

	if (distination == NULL || source == NULL)
		return (NULL);
	pdst = (char *)distination;
	psrc = source;
	while (len--)
		*pdst++ = *psrc++;
	return (distination);
}
