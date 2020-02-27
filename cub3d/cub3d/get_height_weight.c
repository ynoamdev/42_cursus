/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_height_weight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:13:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 21:22:21 by ynoam            ###   ########.fr       */
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

	i = 0;
	j = 1;
	fd = open(file, O_RDONLY);
	while((lines > i++) && get_next_line(fd, &line))
		free(line);
	while(get_next_line(fd, &line) && j++)
		free(line);
	free(line);
	map.ptr_matrix = malloc(sizeof(char *) *  (j + 1));
	close(fd);
	return (j);
}
