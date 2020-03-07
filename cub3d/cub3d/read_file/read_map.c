/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/07 21:41:38 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int map, char *line, char *filename)
{
	int		line_width;
	int		j;
	int		i;

	j = map;
	line_width = ft_check_map_line(line, 0);
	ft_free(&line);
	while (get_next_line(fd, &line) && ++map)
	{
		i = ft_check_map_line(line, map - j - 1);
		if (i >= line_width)
			line_width = i;
		ft_free(&line);
	}
	ft_free(&line);
	g_mydata.map_width = line_width;
	g_mydata.map_height = map - j + 1;
	g_mydata.ptr_map = malloc(sizeof(char*) * (g_mydata.map_height + 1));
	g_mydata.ptr_map[g_mydata.map_height] = NULL;
	ft_take_map(filename, j);
}
