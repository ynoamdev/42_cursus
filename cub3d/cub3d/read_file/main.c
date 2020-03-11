/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 15:38:42 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** TODO:
*/

int ft_draw(int key)
{
	mlx_clear_window(g_data.mlx_ptr, g_data.win_ptr);
	ft_draw_map();
	if (key == MAC_KEY_ESC)
	{
		mlx_destroy_window(g_data.mlx_ptr, g_data.win_ptr);
		exit(EXIT_SUCCESS);
	}
	else if (key == MAC_KEY_LEFT || key == MAC_KEY_H)
		ft_draw_player(-1, 0);
	else if (key == MAC_KEY_RIGHT || key == MAC_KEY_L)
		ft_draw_player(1, 0);
	else if (key == MAC_KEY_DOWN || key == MAC_KEY_J)
		ft_draw_player(0, -1);
	else if (key == MAC_KEY_UP || key == MAC_KEY_K)
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
		g_player.mov_speed = 10.0;
		g_player.rotation = 10.0;
		g_player.radius = 10.0;
		ft_select_p_view();
		ft_draw_map();
		ft_draw_player(0, 0);
}

int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		ft_setup(argv[1]);
		mlx_hook(g_data.win_ptr, 2, 1L<<0, ft_draw, (void *)0);
		mlx_loop(g_data.mlx_ptr);

		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_putstr_fd("Error: Argument.\n", 2);
		exit(EXIT_FAILURE);
	}
}
