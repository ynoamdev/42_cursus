/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:33:46 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/04 12:07:12 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_take_map(char *filename, int map)
{
	int i;
	int fd;
	char *line;

	if (((fd = open(filename, O_RDONLY)) == -1) && ft_sys_error(filename))
		exit(EXIT_FAILURE);
	i = 0;
	while (i < map-1 && ++i)
	{
		get_next_line(fd, &line);
		ft_free(&line);
	}
	i = 0;
	get_next_line(fd, &line);
	g_map.ptr_map[i++] = ft_strdup(line);
	ft_free(&line);
	while (get_next_line(fd, &line))
	{
		g_map.ptr_map[i++] = ft_strdup(line);
		ft_free(&line);
	}
	ft_free(&line);
	return (1);
}
