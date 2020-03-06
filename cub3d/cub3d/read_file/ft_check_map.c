/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 11:17:07 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/06 11:57:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_map(void)
{
	int i;
	int j;

	if (ft_is_all_line_one(g_s_mydata.ptr_map[0])
			|| ft_is_all_line_one(g_s_mydata.ptr_map[g_s_mydata.map_height - 1]))
		ft_map_error();
	i = 1;
	while (i <= g_s_mydata.map_height - 2)
	{
		j = 0;
		while (g_s_mydata.ptr_map[i][j])
			if (g_s_mydata.ptr_map[i][j++] != ' ')
				break ;
		if (g_s_mydata.ptr_map[i][j] != '1'
				|| g_s_mydata.ptr_map[i][ft_strlen(g_s_mydata.ptr_map[i]) - 1] != '1')
			ft_map_error();
			i++;
	}
}
