/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_column.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 06:17:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/11 12:25:31 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_column(t_data2 *img, float x, float y, float height)
{
	int i;

	i = 0;
	if (y < 0)
		y = 0.0;
	while (i != (int)height)
	{
		my_mlx_pixel_put(img, x, y, VIOLET);
		y++;
		i++;
	}
}
