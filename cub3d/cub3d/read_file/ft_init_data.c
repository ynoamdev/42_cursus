/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/07 21:22:17 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_init_data(void)
{
	g_mydata.ceill = -1;
	g_mydata.floor = -1;
	g_mydata.map_height = -1;
	g_mydata.map_width = -1;
	g_mydata.mlx_ptr = NULL;
	g_mydata.ptr_map = NULL;
	g_mydata.square_height= 32;
	g_mydata.square_width = 32;
	g_mydata.texture_e = NULL;
	g_mydata.texture_n = NULL;
	g_mydata.texture_s = NULL;
	g_mydata.texture_sprit = NULL;
	g_mydata.texture_w = NULL;
	g_mydata.tile_size = 32;
	g_mydata.win_height = -1;
	g_mydata.win_ptr = NULL;
	g_mydata.win_width = -1;
	return (1);
}
