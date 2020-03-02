/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 22:30:02 by yousseff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int lines)
{
	int		i;
	char	*line;
	char	*str;
	char	*freed;

	i = 0;
	while((lines > i++) && get_next_line(fd, &line))
		free(line);
	get_next_line(fd, &line);
	i = ft_check_map_line(line);
	free(line);
	while(get_next_line(fd, &line))
	{
		if (ft_check_map_line(line) != i)
			ft_map_error();
		str = freed;
		freed = ft_strjoin(freed, line);
		free(line);
		free(str);
	}
	g_map.ptr_map = freed;
}
