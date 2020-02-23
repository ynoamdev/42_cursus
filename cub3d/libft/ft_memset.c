/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:26:52 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 15:32:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *byte, int c, size_t len)
{
	unsigned char *test;

	test = byte;
	while (len--)
		*test++ = (unsigned char)c;
	return (byte);
}
