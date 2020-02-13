/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 16:24:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 15:26:07 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *distination, const void *source, int c, size_t n)
{
	char *test;
	char *test2;

	test = distination;
	test2 = (char *)source;
	while (n--)
	{
		*test = *test2;
		if (*test2 == (char)c)
			return ((void *)(++test));
		test++;
		test2++;
	}
	return (0);
}
