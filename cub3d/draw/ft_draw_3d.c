/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_3d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 19:04:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 14:52:15 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_3d(t_images *img, t_rays ray[])
{
	int		i;
	float	pro_wall_height;
	float	per_distance;
	float	proj_distance;
	int		wall_strip_height;
	int		wall_top_pixel;
	int		wall_bottom_pixel;
	int		y;
	unsigned int		color;

	i = 0;

	while (i < g_data.win_width)
	{
		if ((per_distance = ray[i].distance * ft_cos(ray[i].ray_angle -
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
			my_mlx_pixel_put(img, i, y++, g_data.ceill);

		int texture_offset_x;
		/*int texture_offset_y;*/
		if (ray[i].was_hit_ver)
			texture_offset_x = (int)ray[i].wall_hity % TILE_SIZE;
		else
			texture_offset_x = (int)ray[i].wall_hitx % TILE_SIZE;
		y = wall_top_pixel;
		while (y < wall_bottom_pixel)
		{
			if (!(ray[i].was_hit_ver) && ray[i].is_rayfacing_up)
			{
				color = RED;
			}
			else if (!(ray[i].was_hit_ver) && ray[i].is_rayfacing_down)
			{
				color = ORANGE;
			}
			else if (ray[i].was_hit_ver && ray[i].is_rayfacing_left)
			{
				color = VIOLET;
			}
			else
			{
				color = YELLOW;
			}
			my_mlx_pixel_put(img, i, y++, color);
		}
		y = wall_bottom_pixel;
		while (y < g_data.win_height)
			my_mlx_pixel_put(img, i, y++, g_data.floor);
		i++;
	}
}
