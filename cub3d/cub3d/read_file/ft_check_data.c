/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:02:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/01 22:20:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_data(void)
{
	if (!g_map.texture_n || !g_map.texture_s || !g_map.texture_w
			|| !g_map.texture_e || !g_map.texture_sprit || !g_map.ptr_map)
		ft_file_error();
	else if (!g_map.win_width || !g_map.win_height
			|| !g_map.floor || !g_map.ceill)
		ft_file_error();
}
