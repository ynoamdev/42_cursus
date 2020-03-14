/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_wall_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:34:59 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/14 18:31:59 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	has_wall_at(double x, double y)
{
	int int_x;
	int int_y;

	while (g_player.x < x && g_player.y < y)
	{
		int_x = g_player.x + (ft_cos(g_player.direction) * g_player.mov_speed * walk);
		int_y = g_player.y + (ft_sin(g_player.direction) * g_player.mov_speed * walk);
		if (g_data.map_ptr[int_y][int_x] == '1')
			break ;
		g_player.y += 0.5;
		g_player.x += 0.5;
	}
	return (0);
}
