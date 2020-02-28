/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_ea.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:22:03 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 22:30:02 by yousseff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the file and give the path of the east texture.
*/

void	get_texture_ea(char *strim)
{
	char	**parts;
	int		i;

	i = 0;
	parts = ft_split(strim, ' ');
	while(parts[i++])
		;
	if (i != 3 && ft_free_double(parts) && ft_free_double_str(parts))
			ft_file_error();
	i = 0;
	if (parts[1][0] == '.')
		i++;
	if (parts[1][1] == '/')
		i++;
	while (parts[1][i])
	{
		if ((ft_isalpha(parts[1][i]) == 0 && parts[1][i] != '_') && ft_free_double(parts) && ft_free_double_str(parts))
			ft_file_error();
		i++;
	}
	g_map.texture_e = ft_strdup(parts[1]);
}
