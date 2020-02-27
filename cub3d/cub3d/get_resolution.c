/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_resolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:15:45 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 16:12:11 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the first line and give the resolution of the window.
*/

void	get_resolution(char *strim)
{
	char	**parts;
	int		i;

	if (parts[1] == NULL || parts[2] == NULL)
	{
		free(strim);
		ft_file_error();
	}
	parts = ft_split(strim, ' ');
	i = 0;
	while (parts[1][i])
		if (ft_isdigit(parts[1][i++]) == 0)
			ft_file_error();
	i = 0;
	while (parts[2][i])
		if (ft_isdigit(parts[2][i++]) == 0)
			ft_file_error();
	map.win_width = ft_atoi(parts[1]);
	map.win_height = ft_atoi(parts[2]);
}
