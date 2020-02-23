/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 15:30:27 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 15:40:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int		x;

	x = count * size;
	ptr = malloc(x);
	if (ptr == NULL)
		return (NULL);
	while (x--)
		ptr[x] = 0;
	return (ptr);
}
