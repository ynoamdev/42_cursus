/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 12:01:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

// TODO:
int ft_draw(int key, void *test)
{
	int speed;
	int radius;

	radius = 10;
	test = NULL;
	mlx_clear_window(g_data.mlx_ptr, g_data.win_ptr);
	ft_draw_map();
	speed = 5;
	if (key == MAC_KEY_ESC)
	{
		mlx_destroy_window(g_data.mlx_ptr, g_data.win_ptr);
		exit(EXIT_SUCCESS);
	}
	else if (key == MAC_KEY_LEFT || key == MAC_KEY_H)
	{
		g_player.p_direction -= 10.0;
		ft_draw_player(g_player.p_x , g_player.p_y, radius);
	}
	else if (key == MAC_KEY_RIGHT || key == MAC_KEY_L)
	{
		g_player.p_direction += 10.0;
		ft_draw_player(g_player.p_x , g_player.p_y, radius);
	}
	else if (key == MAC_KEY_DOWN || key == MAC_KEY_J)
	{
		g_player.p_x -= ft_cos(g_player.p_direction) * speed;
		g_player.p_y -= ft_sin(g_player.p_direction) * speed;
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	}
	else if (key == MAC_KEY_UP || key == MAC_KEY_K)
	{
		g_player.p_x += ft_cos(g_player.p_direction) * speed;
		g_player.p_y += ft_sin(g_player.p_direction) * speed;
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	}
	else 
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	return (0);
}

void	ft_setup(void)
{
		ft_select_p_view();
		ft_draw_map();
		ft_draw_player(g_player.p_x, g_player.p_y, 10);
}

int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		read_file(argv[1]);
		g_data.mlx_ptr = mlx_init();
		g_data.win_ptr = mlx_new_window(g_data.mlx_ptr, g_data.map_width *g_data.tile_size, g_data.map_height * g_data.tile_size, argv[1]);
		ft_setup();
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
