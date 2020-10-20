/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 19:04:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/20 20:44:48 by ynoam            ###   ########.fr       */
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
		if ((per_distance = ray[x].distance * ft_cos(ray[x].ray_angle -
						g_player.direction)) == 0.0)
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
			my_mlx_pixel_put(img, x, y++, g_data.ceill);

		int texture_offset_x;
		if (ray[x].was_hit_ver)
			texture_offset_x = (int)ray[x].wall_hity % TILE_SIZE;
		else
			texture_offset_x = (int)ray[x].wall_hitx % TILE_SIZE;

		y = wall_top_pixel;
		while (y < wall_bottom_pixel)
		{
			/*int distance_from_top = y + (wall_strip_height / 2) - ((g_data.win_height * TILE_SIZE)/ 2);*/
			int distance_from_top = y + (wall_strip_height / 2) - ((g_data.win_height)/ 2);

			if (ray[x].was_hit_ver && ray[x].is_rayfacing_left)
			{
				int texture_offset_y = distance_from_top * (g_txtr_n.height / wall_strip_height);
				color = g_txtr_n.addr[(g_txtr_n.width * texture_offset_y) + texture_offset_x];
			}
			else if (ray[x].was_hit_ver && !(ray[x].is_rayfacing_left))
			{
				int texture_offset_y = distance_from_top * (g_txtr_e.height / wall_strip_height);
				color = g_txtr_e.addr[(g_txtr_e.width * texture_offset_y) + texture_offset_x];
			}
			else if (!ray[x].was_hit_ver && ray[x].is_rayfacing_up)
			{
				int texture_offset_y = distance_from_top * (g_txtr_s.height / wall_strip_height);
				color = g_txtr_s.addr[(g_txtr_s.width * texture_offset_y) + texture_offset_x];
			}
			else
			{
				int texture_offset_y = distance_from_top * (g_txtr_w.height / wall_strip_height);
				color = g_txtr_n.addr[(g_txtr_n.width * texture_offset_y) + texture_offset_x];
			}
			my_mlx_pixel_put(img, x, y++, color);
		}
		y = wall_bottom_pixel;
		while (y < g_data.win_height)
			my_mlx_pixel_put(img, x, y++, g_data.floor);
		x++;
	}
}
