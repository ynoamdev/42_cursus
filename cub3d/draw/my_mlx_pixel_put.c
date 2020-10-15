/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_mlx_pixel_put.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 23:04:42 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 10:33:12 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	my_mlx_pixel_put(t_data2 *img, int x, int y, int color)
{
	char	*distination;

	distination = img->addr + (y * img->line_length + x *
			(img->bits_per_pixel / 8));
	*(unsigned int*)distination = color;
}
