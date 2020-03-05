/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/05 22:34:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int map, char *line, char *filename)
{
	int		line_width;
	int		j;
	int		i;

	j = map;
	line_width = ft_check_map_line(line);
	ft_free(&line);
	while (get_next_line(fd, &line) && ++map)
	{
		i = ft_check_map_line(line);
		if (i >= line_width)
			line_width = i;
		ft_free(&line);
	}
	ft_free(&line);
	g_s_mydata.map_width = line_width;
	g_s_mydata.map_height = map - j + 1;
	g_s_mydata.ptr_map = malloc(sizeof(char*) * (g_s_mydata.map_height + 1));
	g_s_mydata.ptr_map[g_s_mydata.map_height] = NULL;
	ft_take_map(filename, j);
}
