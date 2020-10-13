/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 19:36:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/09 18:45:59 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "cub3d.h"

/*
** this function update the player position
*/

void	ft_update(int l_key)
{
	if (l_key == LINUX_KEY_ESC)
		exit(EXIT_SUCCESS);
	else if (l_key == LINUX_LEFT_ARROW || l_key == LINUX_KEY_H)
		g_player.turn = -1;
	else if (l_key == LINUX_RIGHT_ARROW || l_key == LINUX_KEY_L)
		g_player.turn = 1;
	else if (l_key == LINUX_DOWN_ARROW || l_key == LINUX_KEY_J)
		g_player.walk = -1;
	else if (l_key == LINUX_UP_ARROW || l_key == LINUX_KEY_K)
		g_player.walk = 1;
}
