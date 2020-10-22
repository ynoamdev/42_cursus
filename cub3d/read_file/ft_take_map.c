/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 22:33:46 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 12:12:07 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

int	ft_take_map(char *filename, int map)
{
	int		i;
	int		fd;
	char	*line;

	if (((fd = open(filename, O_RDONLY)) < 0))
		ft_sys_error(filename);
	i = 0;
	while (i < map - 1 && ++i && get_next_line(fd, &line))
		ft_free(&line);
	i = 0;
	while (get_next_line(fd, &line))
	{
		g_data.map_ptr[i++] = ft_strdup(line);
		ft_free(&line);
	}
	ft_free(&line);
	close(fd);
	return (1);
}
