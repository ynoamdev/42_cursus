/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/19 14:14:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

void	ft_init_data(void)
{
	g_player.mov_speed = TILE_SIZE / 4;
	g_player.rotation = 5.0;
	g_player.radius = 10.0;
	g_player.walk = 0;
	g_player.turn = 0;
	g_player.lateral = 0;
	g_data.ceill = -1;
	g_data.floor = -1;
	g_data.map_height = -1;
	g_data.map_ptr = NULL;
	g_data.map_width = -1;
	g_data.mlx_ptr = NULL;
	g_txtr_n.file = NULL;
	g_txtr_e.file = NULL;
	g_txtr_s.file = NULL;
	g_txtr_w.file = NULL;
	g_txtr_sprit.file = NULL;
	g_data.win_height = -1;
	g_data.win_width = -1;
}
