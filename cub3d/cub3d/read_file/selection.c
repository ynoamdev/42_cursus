/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 17:56:17 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/05 15:49:35 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	selection(char *str)
{
	char *line;

	line = ft_strtrim(str, "\t ");
	if (line[0] == 'R')
		get_resolution(line);
	else if (line[0] == 'N' && line[1] == 'O' && line[2] == ' ')
		get_texture_no(line);
	else if (line[0] == 'S' && line[1] == 'O' && line[2] == ' ')
		get_texture_so(line);
	else if (line[0] == 'W' && line[1] == 'E' && line[2] == ' ')
		get_texture_we(line);
	else if (line[0] == 'E' && line[1] == 'A' && line[2] == ' ')
		get_texture_ea(line);
	else if (line[0] == 'S' && line[1] == ' ')
		get_texture_s(line);
	else if (line[0] == 'F' && line[1] == ' ')
		get_color_f(line);
	else if (line[0] == 'C' && line[1] == ' ')
		get_color_c(line);
	else
		ft_file_error();
	ft_free(&line);
}
