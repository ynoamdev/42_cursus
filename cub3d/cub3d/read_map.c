/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:26:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 16:40:30 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	read_map(int fd, int lines, t_cub *map, const char *file)
{
	t_h_w	*new;
	int		i;

	i = 0;
	new = malloc(sizeof(t_h_w) * 1);
	new->map_line = 0;
	new->map_column = 0;
	new = get_height_weight(file, lines, new);
	if (new->map_line != 0 && new->map_column != 0)
	{
		map->ptr_matrix = malloc(sizeof(char *) * new->map_line + 1);
		map->ptr_matrix[new->map_line] = NULL;
		while(i < new->map_column )
			fill_map(lines, new, map, file);
		return (0);
	}
	//ft_free_struct(map);
	ft_putstr_fd("Error: Map file not good.\n", 2);
	exit(EXIT_FAILURE);
}
