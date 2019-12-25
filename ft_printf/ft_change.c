/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/25 09:44:07 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_change(int *space, int *zero, int *banzero, int dot)
{
	if (*zero < 0 && *banzero == 1)
	{
		*zero = *space;
		*space = 0;
	}
	else if (*zero == 0 && dot == TRUE)
		*zero = -1;
	else if (space != 0 && *zero == 0 && dot == FALSE)
		*zero = -2;
}
