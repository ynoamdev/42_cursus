/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_select_p_view.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:37:13 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/10 16:50:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_select_p_view(void)
{
	if (g_mydata.player_view == 'N')
		g_player.p_direction = 270.0;
	else if (g_mydata.player_view == 'W')
		g_player.p_direction = 180.0;
	else if (g_mydata.player_view == 'S')
		g_player.p_direction = 90.0;
	else
		g_player.p_direction = 0.0;
}
