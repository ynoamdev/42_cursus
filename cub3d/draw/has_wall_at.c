/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_wall_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:34:59 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/15 12:09:44 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	has_wall_at(float x, float y)
{
	int int_x;
	int int_y;

	int_x = x / TILE_SIZE;
	int_y = y / TILE_SIZE;
	if (int_y < 0 || int_y >= g_data.map_height || int_x < 0 || int_x >
			(int)ft_strlen(g_data.map_ptr[int_y]))
		return (1);
	if (g_data.map_ptr[int_y][int_x] == '1')
		return (1);
	return (0);
}
