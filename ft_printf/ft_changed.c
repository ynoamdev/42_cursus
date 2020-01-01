/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2020/01/01 15:08:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_changed(int *space, int *zero, int banzero, int bandot)
{
	if (banzero && *zero > 0 && !*space && !bandot)
		*zero = *zero * -1;
	else if (banzero && bandot && *zero < 0 && *space > 0)
	{
		*zero = *space;
		*space = 0;
		if (*space == 0 && *zero > 0 && bandot)
			*zero = *zero * -1;
	}
	else if (*zero < 0 && *space <= 0)
		*zero = -1;
	else if (!banzero && !bandot)
		*zero = -1;
	else if (bandot && !banzero && *zero < 0)
		*zero = -1;
	else if (!bandot && banzero && !*zero && !*space)
		*zero = -1;
}
