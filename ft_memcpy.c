/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 18:08:28 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/13 18:08:31 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *distination, const void *source, size_t len)
{
	char		*pintertodist;
	const char	*pintertosrc;

	pintertodist = distination;
	pintertosrc = source;
	while (len--)
		*pintertodist++ = *pintertosrc++;
	return (distination);
}
