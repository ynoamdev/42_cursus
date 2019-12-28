/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 17:47:25 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_changes(int *space, int *zero, int banzero, int bandot)
{
	if (*zero < 0 && banzero == TRUE && bandot == 1)
	{
		*zero = *space;
		*space = 0;
	}
	else if (*zero == 0 && banzero == 0 && bandot == 0)
		*zero = -1; 
}
