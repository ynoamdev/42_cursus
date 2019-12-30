/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/21 16:27:08 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/30 21:08:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

void	ft_changes(int *space, int *zero, int banzero, int bandot)
{
	if (*space != 0 && banzero == 0 && bandot == 0)
		*zero = -1;
	else if (*space == 0 && banzero == 0 && bandot == 0 && *zero == 0)
		*zero = -1;
}
