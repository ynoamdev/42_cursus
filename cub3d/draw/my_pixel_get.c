/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_pixel_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 08:21:18 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 08:46:21 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	my_pixel_get(int x, int y, int wich_txtr)
{
	int color;

	if (wich_txtr == 1)
		color = *(g_txtr_n.addr + (y * g_txtr_n.width + x * 4));
	else if (wich_txtr == 2)
		color = *(g_txtr_s.addr + (y * g_txtr_s.width + x * 4));
	else if (wich_txtr == 3)
		color = *(g_txtr_w.addr + (y * g_txtr_w.width + x * 4));
	else
		color = *(g_txtr_e.addr + (y * g_txtr_e.width + x * 4));
	return (color);
}
