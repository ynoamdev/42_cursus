/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 20:01:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char *line, t_cub *map)
{
	if (line != NULL)
	{
		if (line[0] == 'R')
			get_resolution(line, map);
		else if (line[0] == 'N' && line[1] == 'O')
			map->texture_n = get_texture(line);
		else if (line[0] == 'S' && line[1] == 'O')
			map->texture_s = get_texture(line);
		else if (line[0] == 'W' && line[1] == 'E')
			map->texture_w = get_texture(line);
		else if (line[0] == 'E' && line[1] == 'A')
			map->texture_e = get_texture(line);
		else if (line[0] == 'S')
			map->texture_sprit = get_texture(line);
		else if (line[0] == 'F')
			get_color_f(line, map);
		else if (line[0] == 'C')
			get_color_c(line, map);
		else
			ft_init_struct(map, -1);
	}
}
