/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:43:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/19 12:22:45 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_texture(void)
{
	int	width;
	int	height;

	if (!(g_texture_e = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_e, &width, &height)))
		ft_texture_error("the east texture file is not good.\n");
	else if (!(g_texture_n = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_n, &width, &height)))
		ft_texture_error("the north texture file is not good.\n");
	else if (!(g_texture_s = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_s, &width, &height)))
		ft_texture_error("the south texture file is not good.\n");
	else if (!(g_texture_w = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_w, &width, &height)))
		ft_texture_error("the west texture file is not good.\n");
	else if (!(g_texture_sprit = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_sprit, &width, &height)))
		ft_texture_error("the sprite texture file is not good.\n");
}
