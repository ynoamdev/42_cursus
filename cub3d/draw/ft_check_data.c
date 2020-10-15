/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:02:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 09:21:54 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_data(void)
{
	if (!g_data.map_ptr)
		ft_file_error();
	else if (g_data.win_width == -1 || g_data.win_height == -1
			|| g_data.floor == -1 ||
			g_data.ceill == -1)
		ft_file_error();
	else if (g_data.map_height < 5 || g_data.map_width < 6)
		ft_map_error();
	/*
	else
		ft_check_map();
	*/
}