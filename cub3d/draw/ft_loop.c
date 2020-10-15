/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 20:44:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 20:30:53 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this function is a loop.
*/

int	ft_loop(int l_key)
{
	ft_update(l_key);
	if (g_player.turn || g_player.walk || g_player.lateral)
		ft_draw();
	g_player.turn = 0;
	g_player.walk = 0;
	g_player.lateral = 0;
	return (0);
}
