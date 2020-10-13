/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_2d_with_img.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 19:47:08 by ynoam             #+#    #+#             */
/*   Updated: 2020/09/24 21:42:47 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw(void)
{
	t_data2		img;
	t_rays	rays[g_data.win_width];

	// image stuf
	mlx_clear_window(g_data.mlx_ptr, g_data.win_ptr);
	img.img = mlx_new_image(g_data.mlx_ptr, g_data.win_width, g_data.win_height);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length,
	&img.endian);

	ft_update_player();
	cast_all_rays(rays);
	ft_draw_3d(&img, rays);
	// draw mini 2d.

	//ft_draw_map_2d_with_img(&img);

//	ft_draw_p_2d_with_img(&img);

//	ft_draw_rays_with_img(&img, rays);

	mlx_put_image_to_window(g_data.mlx_ptr, g_data.win_ptr, img.img, 0, 0);
	mlx_destroy_image(g_data.mlx_ptr, img.img);
	g_player.turn = 0;
	g_player.walk = 0;
}
