/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:00:57 by ynoam             #+#    #+#             */
/*   Updated: 2020/04/29 15:36:17 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

float	ft_distance(float x, float y)
{
	float	var_x;
	float	var_y;

	var_x = x - g_player.x;
	var_y = y - g_player.y;
	return (sqrt((var_x * var_x) + (var_y * var_y)));
}
