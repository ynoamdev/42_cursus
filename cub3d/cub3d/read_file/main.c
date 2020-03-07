/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/07 21:40:13 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_test(int key, void *test)
{
	int raduis = 10;

	test = NULL;
	mlx_clear_window(g_mydata.mlx_ptr, g_mydata.win_ptr);
	ft_draw_map();
	if (key == MAC_KEY_ESC)
	{
		mlx_destroy_window(g_mydata.mlx_ptr, g_mydata.win_ptr);
		exit(EXIT_SUCCESS);
	}
	else if (key == MAC_KEY_LEFT)
		ft_draw_circle(g_s_player.player_x -= 10, g_s_player.player_y, RED, raduis);
	else if (key == MAC_KEY_RIGHT)
		ft_draw_circle(g_s_player.player_x += 10, g_s_player.player_y, RED, raduis);
	else if (key == MAC_KEY_DOWN)
		ft_draw_circle(g_s_player.player_x, g_s_player.player_y += 10, RED, raduis);
	else if (key == MAC_KEY_UP)
		ft_draw_circle(g_s_player.player_x, g_s_player.player_y -= 10, RED, raduis);
	return (0);
}


int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		read_file(argv[1]);
		g_mydata.mlx_ptr = mlx_init();
		g_mydata.win_ptr = mlx_new_window(g_mydata.mlx_ptr, g_mydata.map_width *g_mydata.tile_size, g_mydata.map_height * g_mydata.tile_size, argv[0]);
		mlx_hook(g_mydata.win_ptr, 2, 1L<<0, ft_test, (void *)0);
		mlx_loop(g_mydata.mlx_ptr);

		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_putstr_fd("Error: Argument.\n", 2);
		exit(EXIT_FAILURE);
	}
}
