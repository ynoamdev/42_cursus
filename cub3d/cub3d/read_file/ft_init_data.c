/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/03 21:19:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_init_data(void)
{
	g_map.ptr_map = NULL;
	g_map.texture_e = NULL;
	g_map.texture_n = NULL;
	g_map.texture_s = NULL;
	g_map.texture_sprit = NULL;
	g_map.texture_w = NULL;
	g_map.ceill = 0;
	g_map.floor = 0;
	g_map.map_height = 0;
	g_map.map_width = 0;
	g_map.win_height = 0;
	g_map.win_width = 0;
	g_map.mlx_ptr = NULL;
	g_map.win_ptr = NULL;
	return (1);
}
