/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 19:04:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/17 14:48:03 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_3d(t_images *img, t_rays ray[])
{
	int		x;
	float	pro_wall_height;
	float	per_distance;
	float	proj_distance;
	int		wall_strip_height;
	int		wall_top_pixel;
	int		wall_bottom_pixel;
	int		y;
	int		color;

	x = 0;

	while (x < g_data.win_width)
	{
		per_distance = ray[x].distance * ft_cos(ray[x].ray_angle - g_player.direction);
		if (per_distance == 0.0)
			per_distance = 1.0;

		proj_distance = (g_data.win_width / 2) / ft_tan(FOV_ANGLE / 2);

		pro_wall_height = (TILE_SIZE / per_distance) * proj_distance;

		wall_strip_height = (int)pro_wall_height;

		wall_top_pixel = (g_data.win_height / 2) - (wall_strip_height / 2);
		wall_top_pixel = (wall_top_pixel < 0) ? 0 : wall_top_pixel;

		wall_bottom_pixel = (g_data.win_height / 2) + (wall_strip_height / 2);
		wall_bottom_pixel = (wall_bottom_pixel > g_data.win_height) ? g_data.win_height : wall_bottom_pixel;

		y = 0;
		while (y < wall_top_pixel && wall_top_pixel < g_data.win_width)
		{
	//		my_mlx_pixel_put(img, x, y++, g_data.ceill);
			my_mlx_pixel_put(img, x, y++, 0xFF444444);
		}
		color = (ray[x].was_hit_ver) ? ((ray[x].is_rayfacing_left) ? RED : GREEN) : ((ray[x].is_rayfacing_up) ? VIOLET : ORANGE);
		y = wall_top_pixel;
		while (y < wall_bottom_pixel)
			my_mlx_pixel_put(img, x, y++, color);

		y = wall_bottom_pixel;
		while (y < g_data.win_height)
		{
		//	my_mlx_pixel_put(img, x, y++, g_data.floor);
			my_mlx_pixel_put(img, x, y++, 0xFF888888);
		}
		x++;
	}
}
