/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 16:36:23 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/14 20:33:54 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_player(void)
{
	double x;
	double y;

	g_player.direction += (g_player.rotation * g_player.turn);
	x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * g_player.walk);
	y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * g_player.walk);
	has_wall_at(x, y);
	ft_draw_line();
	ft_draw_circle(g_player.x, g_player.y);
}
