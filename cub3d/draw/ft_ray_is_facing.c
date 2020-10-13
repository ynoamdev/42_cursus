/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_is_facing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/08 19:46:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/04/08 22:04:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_ray_is_facing(t_rays *ray)
{
	ray->is_rayfacing_right = ft_cos(ray->ray_angle) > 0 ? 1 : 0;
	ray->is_rayfacing_left = !ray->is_rayfacing_right;
	ray->is_rayfacing_down = ft_sin(ray->ray_angle) > 0 ? 1 : 0;
	ray->is_rayfacing_up = !ray->is_rayfacing_down;
}
