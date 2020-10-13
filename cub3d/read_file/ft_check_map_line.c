/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:44:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/15 14:50:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

int	ft_check_map_line(char *str, int position)
{
	int			i;
	static int	player;

	i = 0;
	while (str[i])
		if (ft_isalnum(str[i]))
			if (ft_isalpha(str[i]) && (str[i] == 'N' || str[i] == 'S' ||
						str[i] == 'E' || str[i] == 'W') && player == 0)
			{
				player = 1;
				g_player.x = i * TILE_SIZE + (TILE_SIZE / 2);
				g_player.y = (position + 1) * TILE_SIZE + (TILE_SIZE / 2);
				g_data.player_view = str[i];
				i++;
			}
			else if (ft_isdigit(str[i]) && str[i] >= '0' && str[i] <= '2')
				i++;
			else
				ft_map_error();
		else if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			ft_map_error();
	return (i);
}
