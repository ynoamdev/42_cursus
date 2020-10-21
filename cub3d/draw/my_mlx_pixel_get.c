/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_get.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 20:44:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/21 20:50:23 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	my_mlx_pixel_get(int x, int y, int wich_txtr)
{
	char *distination;

	if (wich_txtr = 1)
		distination = g_txtr_n.addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	else if (wich_txtr = 1)
		distination = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	else if (wich_txtr = 1)
		distination = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	else
		distination = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	*(unsigned int*)distination = color;
}
