/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_resolution.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 16:15:45 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/05 15:42:21 by ynoam            ###   ########.fr       */
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

	i = 0;
	parts = ft_split(strim, ' ');
	while (parts[i++] != NULL)
		;
	if (i != 4 && ft_free_double(parts)
			&& ft_free_double_str(parts) && ft_free(&strim))
		ft_file_error();
	i = 0;
	while (parts[1][i])
		if (ft_isdigit(parts[1][i++]) == 0 && ft_free_double(parts)
				&& ft_free_double_str(parts) && ft_free(&strim))
			ft_file_error();
	i = 0;
	while (parts[2][i])
		if (ft_isdigit(parts[2][i++]) == 0 && ft_free_double(parts)
				&& ft_free_double_str(parts) && ft_free(&strim))
			ft_file_error();
	g_s_mydata.win_width = ft_atoi(parts[1]);
	g_s_mydata.win_height = ft_atoi(parts[2]);
	ft_free_double(parts);
	ft_free_double_str(parts);
}
