/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_height_weight.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 11:13:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 16:52:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this give you the column and the lines of the map.
*/

void	*get_height_weight(const char *file, int lines, t_h_w *new)
{
	int		i;
	int		fd;
	char	*line;
	char	*strim;
	char	**words;

	i = 0;
	fd = open(file, O_RDONLY);
	while((lines > i++) && get_next_line(fd, &line))
		free(line);
	get_next_line(fd, &line);
	strim = ft_strtrim(line);
	free(line);
	words = ft_split(strim);
	i = 0;
	while(words[i++] != NULL)
		new->map_column += 1;
	ft_free_double(words);
	free(words);
	while(get_next_line(fd, &line))
	{
		new->map_line += 1;
		free(line);
	}
}
