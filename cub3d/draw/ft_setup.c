/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 18:46:41 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/18 12:26:23 by ynoam            ###   ########.fr       */
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
	ft_check_texture_files();
	if (!(g_data.mlx_ptr = mlx_init()))
		ft_my_errors("fails to set up the connection to the graphical system.");
	else if (!(g_data.win_ptr = mlx_new_window(g_data.mlx_ptr, g_data.win_width, g_data.win_height, (char*)file)))
		ft_my_errors("fails to create a new window.");
	ft_check_texture();
	ft_init_p_view();
}
