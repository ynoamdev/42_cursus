/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_circle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:18:44 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/07 22:14:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** draw a circle in the window.
*/

void	ft_draw_circle(int x, int y, int color, int radius)
{
	float	degree;
	int		new_x;
	int		new_y;

	mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr, x, y, color);
	degree = 0.1;
	while (degree <= 360.0)
	{
		new_x = cos(degree * (M_PI / 180)) * radius;
		new_y = sin(degree * (M_PI / 180)) * radius;
		mlx_pixel_put(g_mydata.mlx_ptr, g_mydata.win_ptr,
				x + new_x, y + new_y, color);
		degree += 0.1;
	}
}
