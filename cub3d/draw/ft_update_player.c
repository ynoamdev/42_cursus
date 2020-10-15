/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_player.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 12:14:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 19:17:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_update_player(void)
{
	float x;
	float y;

	g_player.direction += (g_player.rotation * g_player.turn);
	if (g_player.walk)
	{
		x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * g_player.walk);
		y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * g_player.walk);
	}
	else if (g_player.lateral)
	{
		x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * g_player.lateral);
		y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * g_player.lateral);
	}
	if (!has_wall_at(x, y))
	{
		g_player.x = x;
		g_player.y = y;
	}
}
