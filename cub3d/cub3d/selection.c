/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 18:12:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char  *line, s_cub *map)
{
	char *strim;

	strim = ft_strtrim(line, " \n");
	if (strim[0] == 'R')
		get_resolution(line, map);
	else if (strim[0] == 'S')
		get_sprite(line, map);
	else if (strim[0] == 'F')
		get_floor_color(line, map);
	else if (strim[0] == 'C')
		get_ceill_color(line, map);
	else if (strim[0] == 'N' && strim[1] == 'O')
		get_north(line, map);
	else if (strim[0] == 'S' && strim[1] == 'O')
		get_south(line, map);
	else if (strim[0] == 'W' && strim[1] == 'E')
		get_west(line, map);
	else if (strim[0] == 'E' && strim[1] == 'A')
		get_east(line, map);
}
