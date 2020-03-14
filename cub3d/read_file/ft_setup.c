/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:46:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/14 19:10:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_setup(const char *file)
{
	ft_init_data();
	read_file(file);
	ft_check_data();
	g_data.mlx_ptr = mlx_init();
	g_data.win_ptr = mlx_new_window(g_data.mlx_ptr
			, g_data.map_width *g_data.tile_size
			, g_data.map_height * g_data.tile_size
			, (char*)file);
	ft_init_p_view();
	g_player.mov_speed = 10.0;
	g_player.rotation = 10.0;
	g_player.radius = 10.0;
	ft_draw_map();
	ft_draw_player(0, 0);
}
