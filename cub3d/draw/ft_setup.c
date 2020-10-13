/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:46:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/07/11 23:17:18 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_setup(const char *file)
{
	ft_init_data();
	read_file(file);
	ft_check_data();
	if (!(g_data.mlx_ptr = mlx_init()))
		ft_sys_error("error : initializing mlx.\n");
	else if(!(g_data.win_ptr = mlx_new_window(g_data.mlx_ptr, g_data.win_width,
			g_data.win_height, (char*)file)))
		ft_sys_error("error : creating mlx window.\n");
	ft_init_p_view();
//	ft_check_texture();
	g_player.mov_speed = TILE_SIZE / 4;
	g_player.rotation = 4.0;
	g_player.radius = 10.0;
	g_player.walk = 0;
	g_player.turn = 0;
}
