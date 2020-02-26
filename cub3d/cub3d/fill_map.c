/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:14:43 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 20:11:40 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	fill_map(int from_line, t_h_w *new, t_cub map, const char *file)
{
	int		i;
	int		fd;
	char	*line;
	char	*strim;

	i = 0;
	fd = open(file, O_RDONLY);
	while((from_line > i++) && get_next_line(fd, &line))
		free(line);


}
