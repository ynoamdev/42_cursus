/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast_all_rays.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 20:45:37 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/14 20:14:11 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** loop in all rays and cast one by one.
*/

void	cast_all_rays(t_rays rays[])
{
	float	ray_angle;
	int		i;

	ray_angle = g_player.direction - (FOV_ANGLE / 2);
	i = 0;
	while (i < g_data.win_width)
	{
		rays[i].ray_angle = ray_angle;
		cast_ray(&rays[i]);
		ray_angle += (float)FOV_ANGLE / g_data.win_width;
		i++;
	}
}
