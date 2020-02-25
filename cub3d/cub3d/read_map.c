/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 19:01:51 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int  read_map(const char *str, t_cub *map)
{
	int fd;
	char *line;
	char *strime;

	fd = open(str, O_RDONLY);
	map = (t_cub*)malloc(sizeof(t_cub) * 1);
	ft_init_struct(map);
	calculat_matrix(str);
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
			while(get_next_line(fd, &line))
			{
			}
	}
	return (0);
}
