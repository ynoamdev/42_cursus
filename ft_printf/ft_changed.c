/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 19:32:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_changed(int *space, int *zero, int banzero, int bandot)
{
	if (*zero < 0 && banzero == TRUE)
	{
		if (*space >= 0)
		{
			*zero = *space;
			*space = 0;
		}
	}
	else if (*space != 0 && *zero == 0 && banzero == 0 && bandot == 0)
		*zero = -1;
	else if (*space == 0 && *zero == 0 && bandot == 1)
		*zero = -1;
	else if (*space == 0 && *zero > 0 && banzero == 1 && bandot == 0)
		*zero = *zero + 1;
	else if (*space == 0 && *zero > 0 && banzero == 0 && bandot == 1)
		*zero = *zero + 1;
}
