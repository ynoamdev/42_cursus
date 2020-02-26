/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:40:34 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 12:20:48 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_init_struct(s_cub *map, int i)
{
	map->win_wight = i;
	map->win_height = i;
	map->texture_n = NULL;
	map->texture_s = NULL;
	map->texture_w = NULL;
	map->texture_e = NULL;
	map->texture_sprit = NULL;
	map->floor = i;
	map->ceill = i;
	map->ptr_matrix = NULL;
}
