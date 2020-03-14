/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_p_view.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 18:12:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 18:12:37 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init_p_view(void)
{
	if (g_data.player_view == 'N')
		g_player.direction = 270.0;
	else if (g_data.player_view == 'W')
		g_player.direction = 180.0;
	else if (g_data.player_view == 'S')
		g_player.direction = 90.0;
	else
		g_player.direction = 0.0;
}
