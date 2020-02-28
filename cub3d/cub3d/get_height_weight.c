/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_height_weight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:13:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 20:34:38 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this give you the lines of the map.
*/

int		get_height_weight(const char *file, int lines)
{
	int		i;
	int		j;
	int		fd;
	char	*line;
	char	*freed;

	i = 0;
	j = 1;
	freed = NULL;
	fd = pen(file, O_RDONLY);
	while((lines > i++) && get_next_line(fd, &line))
		free(line);
	get_next_line(fd, &line);
	j = ft_check_map_line(line);
	free(line);
	while(get_next_line(fd, &line))
	{
		if (ft_check_map_line(line) != j)
			ft_map_error();
		freed = ft_strjoin(freed, line);
		free(line);
	}
	free(line);
}
