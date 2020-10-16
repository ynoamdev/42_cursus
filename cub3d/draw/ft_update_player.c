/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 12:14:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/16 11:33:00 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_update_player(void)
{
	float x;
	float y;

	g_player.direction += (g_player.rotation * g_player.turn);
	x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * g_player.walk);
	y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * g_player.walk);
	if (!has_wall_at(x, y))
	{
		g_player.x = x;
		g_player.y = y;
	}
	if (g_player.lateral == 1)
	{
		x = g_player.x + (ft_cos(g_player.direction + 90) * g_player.mov_speed);
		y = g_player.y + (ft_sin(g_player.direction + 90) * g_player.mov_speed);
	}
	if (g_player.lateral == -1)
	{
		x = g_player.x + (ft_cos(g_player.direction - 90) * g_player.mov_speed);
		y = g_player.y + (ft_sin(g_player.direction - 90) * g_player.mov_speed);
	}
	if (!has_wall_at(x, y))
	{
		g_player.x = x;
		g_player.y = y;
	}
}
