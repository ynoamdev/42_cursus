/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 21:15:49 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/15 12:13:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

void	ft_init_data(void)
{
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
