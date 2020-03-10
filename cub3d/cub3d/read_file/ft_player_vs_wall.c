/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_vs_wall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:08:46 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/10 21:17:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_player_vs_wall(double x, double y)
{
	int i;
	int j;

	i = x / g_mydata.square_width;
	j = y / g_mydata.square_height;

	if (g_mydata.map_ptr[j][i] == '1')
		g_player.p_vs_wall = 1;
	else
		g_player.p_vs_wall = 0;
}
