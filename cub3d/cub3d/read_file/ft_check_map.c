/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 11:17:07 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/08 15:36:58 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_map(void)
{
	int i;
	int j;

	if (ft_is_all_line_one(g_mydata.map_ptr[0])
			|| ft_is_all_line_one(g_mydata.map_ptr[g_mydata.map_height - 1]))
		ft_map_error();
	i = 1;
	while (i <= g_mydata.map_height - 2)
	{
		j = 0;
		while (g_mydata.map_ptr[i][j])
			if (g_mydata.map_ptr[i][j++] != ' ')
				break ;
		if (g_mydata.map_ptr[i][j] != '1'
				|| g_mydata.map_ptr[i][ft_strlen(g_mydata.map_ptr[i]) - 1] != '1')
			ft_map_error();
			i++;
	}
}
