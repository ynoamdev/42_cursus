/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 16:42:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** TODO: the main function call the other function
*/

int ft_update(int key)
{
	mlx_clear_window(g_data.mlx_ptr, g_data.win_ptr);
	ft_draw_map();
	if (key == MAC_KEY_ESC)
		exit(EXIT_SUCCESS);
	else if (key == MAC_LEFT_ARROW || key == MAC_KEY_H)
		ft_draw_player(-1, 0);
	else if (key == MAC_RIGHT_ARROW || key == MAC_KEY_L)
		ft_draw_player(1, 0);
	else if (key == MAC_DOWN_ARROW || key == MAC_KEY_J)
		ft_draw_player(0, -1);
	else if (key == MAC_UP_ARROW || key == MAC_KEY_K)
		ft_draw_player(0, 1);
	else 
		ft_draw_player(0, 0);
	return (0);
}

void	ft_setup(const char *file)
{
		read_file(file);
		g_data.mlx_ptr = mlx_init();
		g_data.win_ptr = mlx_new_window(g_data.mlx_ptr, g_data.map_width *g_data.tile_size, g_data.map_height * g_data.tile_size, (char*)file);
		ft_select_p_view();
		g_player.mov_speed = 10.0;
		g_player.rotation = 10.0;
		g_player.radius = 10.0;
		ft_draw_player(0, 0);
		ft_draw_map();
}

void	ft_save_image(void)
{
}

int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		ft_setup(argv[1]);
		mlx_hook(g_data.win_ptr, 2, 1L<<0, ft_update, (void *)0);
		mlx_loop(g_data.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_putstr_fd("cub3d: error: no input files\n", 2);
		exit(EXIT_FAILURE);
	}
}
