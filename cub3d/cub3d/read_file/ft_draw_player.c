/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:23 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 15:54:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_player(intturn, int walk)
{
	int		i;
	double	newx;
	double	newy;
	double	angle;

	i = 0;
	if (turn == 1)
		g_player.direction += g_player.rotation;
	else if (turn == -1)
		g_player.direction -= g_player.rotation;
	else if (walk == 1 || walk == -1)
	{
		newx = ft_cos(g_player.direction) * g_player.mov_speed;
		newy = ft_sin(g_player.direction) * g_player.mov_speed;
		if (walk == 1)
		{
			g_player.x += newx;
			g_player.y += newy;
		}
		else
		{
			g_player.x -= newx;
			g_player.y -= newy;
		}
	}
	while (i < g_player.radius)
	{
		newx = ft_cos(g_player.direction) * i;
		newy = ft_sin(g_player.direction) * i;
		mlx_pixel_put(g_data.mlx_ptr, g_data.win_ptr, g_player.x + newx, g_player.y + newy, YELLOW);
		i++;
	}
	angle = 0.0;
	while (angle <= 360.0)
	{
		newx = ft_cos(angle) * g_player.radius;
		newy = ft_sin(angle) * g_player.radius;
		mlx_pixel_put(g_data.mlx_ptr, g_data.win_ptr, g_player.x + newx, g_player.y + newy, RED);
		angle += 0.1;
	}
}
