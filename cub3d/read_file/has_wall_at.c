/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_wall_at.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 17:34:59 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 18:31:07 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	has_wall_at(double x, double y)
{
	int int_x;
	int int_y;

	int_x = x / g_data.square_height;
	int_y = y / g_data.square_height;
	if (g_data.map_ptr[int_y][int_x] == '1')
		return (1);
	return (0);
}
