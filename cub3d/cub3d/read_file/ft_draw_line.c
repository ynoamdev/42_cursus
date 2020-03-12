/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:23:25 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 17:29:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_line(void)
{
	int		i;
	double	newx;
	double	newy;

	i = 0;
	while (i < g_player.radius)
	{
		newx = ft_cos(g_player.direction) * i;
		newy = ft_sin(g_player.direction) * i;
		mlx_pixel_put(g_data.mlx_ptr, g_data.win_ptr, g_player.x
				+ newx, g_player.y + newy, YELLOW);
		i++;
	}
}
