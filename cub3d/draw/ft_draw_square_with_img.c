/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_square_with_img.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 20:01:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/14 18:43:29 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_square_with_img(t_data2 *img, int x, int y, int color)
{
	int		new_x;
	int		new_y;
	int		new_two_y;

	new_x = x + TILE_SIZE * MINIMAP_SCALE;
	new_y = y + TILE_SIZE * MINIMAP_SCALE;
	new_two_y = y;
	while (x <= new_x)
	{
		y = new_two_y;
		while (y <= new_y)
		{
			my_mlx_pixel_put(img, x, y, color);
			y++;
		}
		x++;
	}
}
