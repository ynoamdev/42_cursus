/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 14:56:20 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

void	ft_init_data(void)
{
	g_player.mov_speed = TILE_SIZE / 4;
	g_player.rotation = 4.0;
	g_player.radius = 10.0;
	g_player.walk = 0;
	g_player.turn = 0;
	g_data.ceill = -1;
	g_data.floor = -1;
	g_data.map_height = -1;
	g_data.map_ptr = NULL;
	g_data.map_width = -1;
	g_data.mlx_ptr = NULL;
	g_data.texture_e = NULL;
	g_data.texture_n = NULL;
	g_data.texture_s = NULL;
	g_data.texture_sprit = NULL;
	g_data.texture_w = NULL;
	g_data.win_height = -1;
	g_data.win_width = -1;
}
