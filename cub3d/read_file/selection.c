/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 12:01:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char *line)
{
	if (g_data.map_ptr != NULL)
		ft_file_error();
	if (line[0] == 'R' && g_data.win_width == -1)
		get_resolution(line);
	else if (line[0] == 'N' && line[1] == 'O'
			&& line[2] == ' ' && g_data.texture_n == NULL)
		g_data.texture_n = get_texture(line);
	else if (line[0] == 'S' && line[1] == 'O'
			&& line[2] == ' ' && g_data.texture_s == NULL)
		g_data.texture_s = get_texture(line);
	else if (line[0] == 'W' && line[1] == 'E'
			&& line[2] == ' ' && g_data.texture_w == NULL)
		g_data.texture_w = get_texture(line);
	else if (line[0] == 'E' && line[1] == 'A'
			&& line[2] == ' ' && g_data.texture_e == NULL)
		g_data.texture_e = get_texture(line);
	else if (line[0] == 'S' && line[1] == ' '
			&& g_data.texture_sprit == NULL)
		g_data.texture_sprit = get_texture(line);
	else if (line[0] == 'F' && line[1] == ' ' && g_data.floor == -1)
		g_data.floor = get_color(line);
	else if (line[0] == 'C' && line[1] == ' ' && g_data.ceill == -1)
		g_data.ceill = get_color(line);
	else
		ft_file_error();
}
