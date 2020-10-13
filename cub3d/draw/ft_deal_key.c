/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deal_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam </var/mail/ynoam>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 00:18:59 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/25 00:19:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_deal_key(int key)
{
	if (key == LINUX_KEY_ESC)
		exit(EXIT_SUCCESS);
	else if (key == LINUX_LEFT_ARROW || key == LINUX_KEY_H)
		g_player.turn = -1;
	else if (key == LINUX_RIGHT_ARROW || key == LINUX_KEY_L)
		g_player.turn = 1;
	else if (key == LINUX_DOWN_ARROW || key == LINUX_KEY_J)
		g_player.walk = -1;
	else if (key == LINUX_UP_ARROW || key == LINUX_KEY_K)
		g_player.walk = 1;
}
