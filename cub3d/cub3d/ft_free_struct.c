/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:33:48 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 16:39:11 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free_struct(t_cub *map)
{
	free(map->texture_n);
	free(map->texture_s);
	free(map->texture_w);
	free(map->texture_e);
	free(map->texture_sprit);
	ft_free_double(map->ptr_matrix);
	free(map->ptr_matrix);
	free(map);
}
