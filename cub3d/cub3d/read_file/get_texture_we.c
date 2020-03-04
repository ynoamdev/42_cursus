/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture_we.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:20:50 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/04 20:38:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the file and give the path of the west texture.
*/

void	get_texture_we(char *strim)
{
	char	**parts;
	int		i;

	i = 0;
	parts = ft_split(strim, ' ');
	while (parts[i++])
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
		if ((ft_isalpha(parts[1][i]) == 0 && parts[1][i] != '_')
				&& ft_free_double(parts))
			ft_file_error();
		i++;
	}
	g_s_mydata.texture_w = ft_strdup(parts[1]);
	ft_free_double(parts);
	free(parts);
}
