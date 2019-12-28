/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changed.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 18:11:31 by ynoam            ###   ########.fr       */
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
		bandot++;
}
