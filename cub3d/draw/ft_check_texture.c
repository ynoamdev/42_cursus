/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:43:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/15 13:28:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_texture(void)
{
	int	width;
	int	height;

	if (!(texture_e = mlx_xpm_file_to_image(g_data.mlx_ptr, g_data.texture_e,
				&width, &height)))
		ft_sys_error("the east texture file not good.\n");
}
