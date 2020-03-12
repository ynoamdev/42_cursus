/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_circle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:17:54 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 17:27:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_circle(double x, double y)
{
	double	newx;
	double	newy;
	double	angle;

	angle = 0.0;
	while (angle <= 360.0)
	{
		newx = ft_cos(angle) * g_player.radius;
		newy = ft_sin(angle) * g_player.radius;
		mlx_pixel_put(g_data.mlx_ptr, g_data.win_ptr, x + newx, y + newy, RED);
		angle += 0.1;
	}
}
