/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deal_key.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:45:40 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/14 20:30:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_deal_key(int key)
{
	if (key == MAC_KEY_ESC)
		exit(EXIT_SUCCESS);
	else if (key == MAC_LEFT_ARROW || key == MAC_KEY_H)
		g_player.turn = -1;
	else if (key == MAC_RIGHT_ARROW || key == MAC_KEY_L)
		g_player.turn = 1;
	else if (key == MAC_DOWN_ARROW || key == MAC_KEY_J)
		g_player.walk = -1;
	else if (key == MAC_UP_ARROW || key == MAC_KEY_K)
		g_player.walk = 1;
	ft_draw();
	return (0);
}
