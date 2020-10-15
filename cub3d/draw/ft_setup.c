/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:46:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/15 14:57:26 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this function init the data used in this programme and the player view.
*/

void	ft_setup(const char *file)
{
	ft_init_data();
	read_file(file);
	ft_check_data();
	if (!(g_data.mlx_ptr = mlx_init()))
		ft_sys_error("error : initializing mlx.\n");
	else if (!(g_data.win_ptr = mlx_new_window(g_data.mlx_ptr, g_data.win_width,
			g_data.win_height, (char*)file)))
		ft_sys_error("error : creating mlx window.\n");
	ft_check_texture();
	ft_init_p_view();
}
