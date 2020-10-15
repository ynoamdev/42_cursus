/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_line_with_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 22:00:22 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 18:13:57 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_rays_with_img(t_images *img, t_rays rays[])
{
	float	newx;
	float	newy;
	int		radius;
	int		i;

	i = 0;
	while (i < g_data.win_width)
	{
		radius = 0;
		while (radius < MINIMAP_SCALE * rays[i].distance)
		{
			newx = ft_cos(rays[i].ray_angle) * radius;
			newy = ft_sin(rays[i].ray_angle) * radius;
			my_mlx_pixel_put(img, MINIMAP_SCALE * (g_player.x + newx),
					MINIMAP_SCALE * (g_player.y + newy), YELLOW);
			radius++;
		}
		i++;
	}
}
