/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:02:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/09 18:23:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_data(void)
{
	if (!g_mydata.texture_n || !g_mydata.texture_s || !g_mydata.texture_w
			|| !g_mydata.texture_e || !g_mydata.texture_sprit
			|| !g_mydata.map_ptr)
		ft_file_error();
	else if (g_mydata.win_width == -1 || g_mydata.win_height == -1
			|| g_mydata.floor == -1 || g_mydata.ceill == -1)
		ft_file_error();
	else if (g_mydata.map_height < 5 || g_mydata.map_width < 6)
		ft_map_error();
	else
		ft_check_map();
}
