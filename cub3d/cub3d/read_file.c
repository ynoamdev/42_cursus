/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 14:55:42 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_file(const char *str)
{
	int		fd;
	int		lines;
	char	*line;
	char	*strime;
	t_cub	*map;

	lines = 0;
	ft_check_file(str, map);
	fd = open(str, O_RDONLY);
	map = (t_cub*)malloc(sizeof(t_cub) * 1);
	ft_init_struct(map, 0);
	while (get_next_line(fd, &line))
	{
		strime = ft_strtrim(line, "\n ");
		free(line);
		if (ft_isalpha(strime[0]))
		{
			selection(strime, map);
			free(strime);
		}
		else if (ft_isdigit(strime[0]))
			read_map(fd, lines, map, str);
		free(strime);
		lines++;
	}
}
