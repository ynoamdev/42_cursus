/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addr_of_texture_img.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:31:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/19 12:20:17 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_addr_of_texture_img(void)
{
	img.addr = mlx_get_data_addr(g_texture_n, &img.bits_per_pixel,
			&img.line_length, &img.endian);
}
