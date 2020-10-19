/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:43:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/19 20:58:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_texture(void)
{
	if (!(g_txtr_e.img = mlx_xpm_file_to_image(g_data.mlx_ptr, g_txtr_e.file, &(g_txtr_e.width), &(g_txtr_e.height))))
		ft_texture_error("the east texture file is not good.\n");
	else if (!(g_txtr_n.img = mlx_xpm_file_to_image(g_data.mlx_ptr, g_txtr_n.file, &(g_txtr_n.width), &(g_txtr_n.height))))
		ft_texture_error("the north texture file is not good.\n");
	else if (!(g_txtr_s.img = mlx_xpm_file_to_image(g_data.mlx_ptr, g_txtr_s.file, &(g_txtr_s.width), &(g_txtr_s.height))))
		ft_texture_error("the south texture file is not good.\n");
	else if (!(g_txtr_w.img = mlx_xpm_file_to_image(g_data.mlx_ptr, g_txtr_w.file, &(g_txtr_w.width), &(g_txtr_w.height))))
		ft_texture_error("the west texture file is not good.\n");
	else if (!(g_txtr_sprit.img = mlx_xpm_file_to_image(g_data.mlx_ptr, g_txtr_sprit.file, &(g_txtr_sprit.width), &(g_txtr_sprit.height))))
		ft_texture_error("the sprite texture file is not good.\n");
}
