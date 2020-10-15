/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 19:36:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 19:17:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** this function update the player position
*/

#include "cub3d.h"

void	ft_update(int l_key)
{
	if (l_key == MAC_KEY_ESC)
		exit(EXIT_SUCCESS);
	else if (l_key == MAC_KEY_A || l_key == MAC_KEY_H)
		g_player.turn = -1;
	else if (l_key == MAC_KEY_D || l_key == MAC_KEY_L)
		g_player.turn = 1;
	else if (l_key == MAC_KEY_S || l_key == MAC_KEY_J)
		g_player.walk = -1;
	else if (l_key == MAC_KEY_W || l_key == MAC_KEY_K)
		g_player.walk = 1;
	else if (l_key == MAC_LEFT_ARROW)
		g_player.lateral = -1;
	else if (l_key == MAC_RIGHT_ARROW)
		g_player.lateral = 1;
}
