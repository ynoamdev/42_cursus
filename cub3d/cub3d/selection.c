/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 16:02:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char *line)
{
	if (line[0] == 'R')
		get_resolution(line);
	else if (line[0] == 'N' && line[1] == 'O')
		get_texture_no(line);
	else if (line[0] == 'S' && line[1] == 'O')
		get_texture_so(line);
	else if (line[0] == 'W' && line[1] == 'E')
		get_texture_we(line);
	else if (line[0] == 'E' && line[1] == 'A')
		get_texture_ea(line);
	else if (line[0] == 'S')
		get_texture_s(line);
	else if (line[0] == 'F')
		get_color_f(line, map);
	else if (line[0] == 'C')
		get_color_c(line, map);
	else
		ft_file_error();
}
