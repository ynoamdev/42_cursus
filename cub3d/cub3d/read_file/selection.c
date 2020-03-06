/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/06 20:38:43 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char *line)
{
	if (line[0] == 'R' && g_s_mydata.win_width == -1)
		get_resolution(line);
	else if (line[0] == 'N' && line[1] == 'O'
			&& line[2] == ' ' && g_s_mydata.texture_n == NULL)
		g_s_mydata.texture_n = get_texture(line);
	else if (line[0] == 'S' && line[1] == 'O'
			&& line[2] == ' ' && g_s_mydata.texture_s == NULL)
		g_s_mydata.texture_s = get_texture(line);
	else if (line[0] == 'W' && line[1] == 'E'
			&& line[2] == ' ' && g_s_mydata.texture_w == NULL)
		g_s_mydata.texture_w = get_texture(line);
	else if (line[0] == 'E' && line[1] == 'A'
			&& line[2] == ' ' && g_s_mydata.texture_e == NULL)
		g_s_mydata.texture_e = get_texture(line);
	else if (line[0] == 'S' && line[1] == ' '
			&& g_s_mydata.texture_sprit == NULL)
		g_s_mydata.texture_sprit = get_texture(line);
	else if (line[0] == 'F' && line[1] == ' ' && g_s_mydata.floor == -1)
		g_s_mydata.floor = get_color(line);
	else if (line[0] == 'C' && line[1] == ' ' && g_s_mydata.ceill == -1)
		g_s_mydata.ceill = get_color(line);
	else
		ft_file_error();
	ft_free(&line);
}
