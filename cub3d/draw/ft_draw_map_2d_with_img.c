/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_map_2d_with_img.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:54:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/14 18:45:10 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_map_2d_with_img(t_data2 *img)
{
	int i;
	int j;
	int line_lenth;

	i = 0;
	j = 0;
	while (i < g_data.map_height)
	{
		j = 0;
		line_lenth = ft_strlen(g_data.map_ptr[i]);
		while (j < line_lenth)
		{
			if (g_data.map_ptr[i][j] == '1')
				ft_draw_square_with_img(img,MINIMAP_SCALE * j,
				MINIMAP_SCALE * i , GREEN);
			j++;
		}
		i++;
	}
}
