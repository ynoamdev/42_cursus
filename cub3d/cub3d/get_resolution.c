/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_resolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:15:45 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 12:27:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the resolution of the window from the file
*/

void	get_resolution(char *line, s_cub *map)
{
	char	**parts;
	char	*strim;
	int		i;

	if (map->win_wight == 0 && map->win_height == 0)
	{
		parts = ft_split(strim, ' ');
		if (parts[0][0] != 'R')
			return (-1);
		i = 0;
		while (parts[1][i])
			if (ft_isdigit(parts[1][i++]) == 0)
				return (-1);
		map->win_wight = ft_atoi(parts[1]);
		i = 0;
		while (parts[2][i])
			if (ft_isdigit(parts[2][i++]) == 0)
				return (-1);
		map->win_height = ft_atoi(parts[2]);
		while (parts[i] != NULL)
			free(parts[i++]);
		free(parts[i]);
		free(parts);
	}
}
