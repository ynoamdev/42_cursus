/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_vs_wall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:08:46 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/10 21:52:23 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_player_vs_wall(double x, double y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	printf ("%f  %f\n", x, y);
	while (i * 32 < y)
		i ++;
	while (j * 32 < x)
		j ++;
	if (g_mydata.map_ptr[i-1][j-1] == '1' && (i *32 > y || j *32 > x))
		g_player.p_vs_wall = 1;
	else 
		g_player.p_vs_wall = 0;
}
