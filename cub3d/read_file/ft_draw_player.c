/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:23 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/13 12:31:44 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_player(int turn, int walk)
{
	double x;
	double y;

	g_player.direction += (g_player.rotation * turn);
	x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * walk);
	y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * walk);
	if (!has_wall_at(x, y))
	{
		g_player.x = x;
		g_player.y = y;
	}
	ft_draw_line();
	ft_draw_circle(g_player.x, g_player.y);
}
