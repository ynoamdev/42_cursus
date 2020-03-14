/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_texture.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 17:57:16 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 16:16:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the strim and give the path of the texture.
*/

char	*get_texture(char *strim)
{
	char	**parts;
	char	*texture;
	int		i;

	i = 0;
	parts = ft_split(strim, ' ');
	while (parts[i++])
		;
	if (i != 3)
		ft_file_error();
	i = 0;
	if (parts[1][0] == '.' && ++i && parts[1][1] == '/')
		i++;
	while (parts[1][i])
	{
		if ((ft_isalpha(parts[1][i]) == 0 && parts[1][i] != '_'))
			ft_file_error();
		i++;
	}
	texture = ft_strdup(parts[1]);
	ft_free_double_ptr(&parts);
	return (texture);
}
