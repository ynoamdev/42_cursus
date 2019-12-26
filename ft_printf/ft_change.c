/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/25 18:42:57 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_change(int *space, int *zero, int banzero, int bandot)
{
	if (*zero < 0 && banzero == TRUE)
	{
		*zero = *space;
		*space = 0;
	}
	else if (*space > 0 && banzero == 0 && bandot != 0 && *zero == 0)
		*zero = -1;
	else if (banzero == 1 && bandot == 0 && *zero > 0 && *space == 0)
		*zero = *zero + 1;
	else if (*space < 0 && *zero == 0 && banzero == 0 && bandot == 1)
		*zero = -2;
}
