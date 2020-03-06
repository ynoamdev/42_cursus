/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:02:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/06 11:53:10 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_data(void)
{
	if (!g_s_mydata.texture_n || !g_s_mydata.texture_s || !g_s_mydata.texture_w
			|| !g_s_mydata.texture_e || !g_s_mydata.texture_sprit || !g_s_mydata.ptr_map)
		ft_file_error();
	else if (!g_s_mydata.win_width || !g_s_mydata.win_height
			|| !g_s_mydata.floor || !g_s_mydata.ceill)
		ft_file_error();
	else if (g_s_mydata.map_height < 5 || g_s_mydata.map_width < 6)
		ft_map_error();
	else
		ft_check_map();
}
