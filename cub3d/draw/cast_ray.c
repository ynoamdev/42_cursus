/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_ray.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 15:38:43 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/17 14:48:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	cast_ray(t_rays *ray)
{
	float	xintercept;
	float	yintercept;
	float	xstep;
	float	ystep;

	ft_ray_is_facing(ray);

	yintercept = (int)(g_player.y / TILE_SIZE) * TILE_SIZE;
	yintercept += ray->is_rayfacing_down ? TILE_SIZE : 0;

	xintercept = g_player.x + (yintercept - g_player.y) / ft_tan(ray->ray_angle);

	ystep = TILE_SIZE;
	ystep *= ray->is_rayfacing_up ? -1 : 1;

	xstep = TILE_SIZE / ft_tan(ray->ray_angle);
	xstep *= (ray->is_rayfacing_left && xstep > 0) ? -1 : 1;
	xstep *= (ray->is_rayfacing_right && xstep < 0) ? -1 : 1;

	float	nxt_hor_x = xintercept;
	float	nxt_hor_y = yintercept;
	int		hor_wall_content;
	float	hor_wall_x;
	float	hor_wall_y;
	int		found_hoz_wall = FALSE;

	while (nxt_hor_x >= 0 && nxt_hor_x <= g_data.map_width * TILE_SIZE && nxt_hor_y >= 0
			&& nxt_hor_y <= g_data.map_height * TILE_SIZE)
	{
		float	x_check = nxt_hor_x;
		float	y_check = nxt_hor_y + (ray->is_rayfacing_up ? -1 : 0);

		if (has_wall_at(x_check, y_check))
		{
			hor_wall_x = nxt_hor_x;
			hor_wall_y = nxt_hor_y;
			if (!(y_check < 0 || y_check > g_data.map_height || x_check < 0 || x_check >
					(int)ft_strlen(g_data.map_ptr[(int)y_check / TILE_SIZE])))
			hor_wall_content = g_data.map_ptr[(int)y_check / TILE_SIZE]
				[(int)x_check / TILE_SIZE];
			found_hoz_wall = TRUE;
			break ;
		}
		else
		{
			nxt_hor_x += xstep;
			nxt_hor_y += ystep;
		}

	}


	///////////////////// VER/////////////////
	//

	xintercept = (int)(g_player.x / TILE_SIZE) * TILE_SIZE;
	xintercept += ray->is_rayfacing_right ? TILE_SIZE : 0 ;

	yintercept = g_player.y + (xintercept - g_player.x) * ft_tan(ray->ray_angle);

	xstep = TILE_SIZE;
	xstep *= ray->is_rayfacing_right ? 1 : -1;

	ystep = TILE_SIZE * ft_tan(ray->ray_angle);
	ystep *= (ray->is_rayfacing_up && ystep > 0) ? -1 : 1;
	ystep *= (ray->is_rayfacing_down && ystep < 0) ? -1 : 1;

	float	nxt_ver_x = xintercept;
	float	nxt_ver_y = yintercept;

	float	ver_wall_x;
	float	ver_wall_y;
	int		ver_wall_content;
	int		found_ver_wall = FALSE;

	while (nxt_ver_x >= 0 && nxt_ver_x <= g_data.map_width * TILE_SIZE && nxt_ver_y >= 0
			&& nxt_ver_y <= g_data.map_height * TILE_SIZE)
	{
		float	x_check = nxt_ver_x + (ray->is_rayfacing_left ? -1 : 0);
		float	y_check = nxt_ver_y;

		if (has_wall_at(x_check, y_check))
		{
			ver_wall_x = nxt_ver_x;
			ver_wall_y = nxt_ver_y;
			if (!(y_check < 0 || y_check > g_data.map_height || x_check < 0 || x_check >
					(int)ft_strlen(g_data.map_ptr[(int)y_check / TILE_SIZE])))
				ver_wall_content = g_data.map_ptr[(int)y_check / TILE_SIZE]
					[(int)x_check / TILE_SIZE];
			found_ver_wall = TRUE;
			break ;
		}
		else
		{
			nxt_ver_x += xstep;
			nxt_ver_y += ystep;
		}
	}
	float	hor_hit_dis = found_hoz_wall ? ft_distance(hor_wall_x, hor_wall_y) : INT_MAX;
	float	ver_hit_dis = found_ver_wall ? ft_distance(ver_wall_x, ver_wall_y) : INT_MAX;

	if (ver_hit_dis < hor_hit_dis)
	{
		ray->wall_content = ver_wall_content;
		ray->wall_hitx = ver_wall_x;
		ray->wall_hity = ver_wall_y;
		ray->was_hit_ver = TRUE;
		ray->distance = ver_hit_dis;
	}
	else
	{
		ray->wall_content = hor_wall_content;
		ray->wall_hitx =  hor_wall_x;
		ray->wall_hity =  hor_wall_y;
		ray->was_hit_ver = FALSE;
		ray->distance = hor_hit_dis;
	}
}
