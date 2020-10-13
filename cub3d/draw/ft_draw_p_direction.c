/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_p_direction.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 23:32:37 by ynoam             #+#    #+#             */
/*   Updated: 2020/04/15 23:41:51 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_p_direction(t_data2 *img)
{
	double	newx;
	double	newy;
	int		radius;

	radius = 0;
	while (radius < 50)
	{
		newx = ft_cos(g_player.direction) * radius;
		newy = ft_sin(g_player.direction) * radius;
		my_mlx_pixel_put(img, g_player.x + newx, g_player.y + newy, YELLOW);
		radius++;
	}
}
