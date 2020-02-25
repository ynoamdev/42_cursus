/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 18:40:34 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 18:53:26 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void ft_init_struct(s_cub *map)
{
	map->win_wight = 0;
	map->win_height = 0;
	map->texture_n = NULL;
	map->texture_s = NULL;
	map->texture_w = NULL;
	map->texture_e = NULL;
	map->texture_sprit = NULL;
	map->floor = 0;
	map->ceill = 0;
	map->ptr_int = NULL;
}
