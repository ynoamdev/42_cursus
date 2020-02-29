/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 20:20:11 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 22:30:01 by yousseff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** Read the file and give the color of the ceill.
*/

void	get_color_c(char *strim)
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
	while(parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
				break ;
	while(parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
				break ;
	while(parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
				break ;
	if ((i < 5 || i > 11) && ft_free_double(parts) && ft_free_double_str(parts))
	{
		free(strim);
		ft_file_error();
	}
	g_map.ceill = get_rgb(parts[1]);
}