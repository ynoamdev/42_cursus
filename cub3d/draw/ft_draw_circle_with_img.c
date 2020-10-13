/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_circle_with_img.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 20:37:37 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/13 17:38:01 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_circle_with_img(t_data2 *img, float x, float y)
{
	float	newx;
	float	newy;
	float	angle;

	angle = 0.0;
	while (angle <= 360.0)
	{
		newx = ft_cos(angle) * g_data.mini_scal * g_player.radius;
		newy = ft_sin(angle) * g_data.mini_scal * g_player.radius;
		my_mlx_pixel_put(img,x + newx,y + newy, RED);
		angle += 0.1;
	}
}
