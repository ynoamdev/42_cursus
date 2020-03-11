/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 21:20:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 12:01:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_map(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < g_data.map_height)
	{
		j = 0;
		while (j < (int)ft_strlen(g_data.map_ptr[i]))
		{
			if (g_data.map_ptr[i][j] == '1')
				ft_draw_square(g_data.tile_size * j,
						g_data.tile_size * i, GREEN);
			j++;
		}
		i++;
	}
}
