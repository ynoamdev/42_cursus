/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/04 20:38:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_init_data(void)
{
	g_s_mydata.ptr_map = NULL;
	g_s_mydata.texture_e = NULL;
	g_s_mydata.texture_n = NULL;
	g_s_mydata.texture_s = NULL;
	g_s_mydata.texture_sprit = NULL;
	g_s_mydata.texture_w = NULL;
	g_s_mydata.ceill = 0;
	g_s_mydata.floor = 0;
	g_s_mydata.map_height = 0;
	g_s_mydata.map_width = 0;
	g_s_mydata.win_height = 0;
	g_s_mydata.win_width = 0;
	g_s_mydata.mlx_ptr = NULL;
	g_s_mydata.win_ptr = NULL;
	return (1);
}
