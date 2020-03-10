/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:23 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/10 18:36:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_player(double x, double y, int radius)
{
	int		i;
	double	newx;
	double	newy;
	double	angle;

	i = 0;
	while (i < radius)
	{
		newx = ft_cos(g_player.p_direction) * i;
		newy = ft_sin(g_player.p_direction) * i;
		mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, newx + x, newy + y, YELLOW);
		i++;
	}
	angle = 0.1;
	while (angle < 360.0)
	{
		newx = ft_cos(angle) * radius;
		newy = ft_sin(angle) * radius;
		mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, newx + x, newy +y, RED);
		angle += 0.1;
	}
	angle = (g_player.p_direction - (g_mydata.fov / 2));
	while (angle <= g_player.p_direction)
	{
		newx = ft_cos(angle) * radius * 5;
		newy = ft_sin(angle) * radius * 5;
		mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, newx + x, newy +y, VIOLET);
		angle += 0.1;
	}
	while (angle <= g_player.p_direction + (g_mydata.fov / 2))
	{
		newx = ft_cos(angle) * radius * 5;
		newy = ft_sin(angle) * radius * 5;
		mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, newx + x, newy +y, VIOLET);
		angle += 0.1;
	}
}
