/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_resolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:15:45 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 17:36:37 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the resolution of the window from the file
*/

int	get_resolution(char *line, s_cub *map)
{
	char	**parts;
	char	*strim;
	int		i;

	i = 0;
	strim = ft_strtrim(line, " \n");
	parts = ft_split(strim, ' ');
	if (parts[0][0] != 'R')
		return (-1);
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
	return (0);
}
