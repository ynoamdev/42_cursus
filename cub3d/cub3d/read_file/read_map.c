/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/04 12:02:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int map, char *line, char *filename)
{
	int		line_width;
	int		j;

	j = map;
	line_width = ft_check_map_line(line);
	ft_free(&line);
	while (get_next_line(fd, &line) && ++map)
	{
		if (ft_check_map_line(line) != line_width)
			ft_map_error();
		ft_free(&line);
	}
	ft_free(&line);
	g_map.map_width = line_width;
	g_map.map_height = map - j + 1;
	g_map.ptr_map = malloc(sizeof(char*) * (g_map.map_height + 1));
	g_map.ptr_map[g_map.map_height] = NULL;
	ft_take_map(filename, j);
}
