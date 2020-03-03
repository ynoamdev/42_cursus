/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:33:46 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/03 22:44:42 by ynoam            ###   ########.fr       */
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
	while (i < map && ++i)
	{
		get_next_line(fd, &line);
		ft_free(&line);
	}
	i = 0;
	g_map.ptr_map[i++] = line;
	ft_free(&line);
	while (get_next_line(fd, &line))
	{
		g_map.ptr_map[i++] = ft_strdup(line);
		ft_free(&line);
	}
	ft_free(&line);
	return (1);
}