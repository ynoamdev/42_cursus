/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/10 21:56:38 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
void ft_draw_map(void)
{
	int *test;
	int		test_i;
	int		sizeline;
	int		endian;

	g_mydata.img_ptr_map = mlx_new_image(g_mydata.mlx_ptr, g_mydata.win_width, g_mydata.win_height);
	test = (int *)mlx_get_data_addr(g_mydata.img_ptr_map, &test_i, &sizeline, &endian);
	printf("%d\n", test_i);
	printf("%d\n", sizeline);
	printf("%d\n", endian);
}

*/
int ft_test(int key, void *test)
{
	int speed;
	int radius;

	radius = 10;
	test = NULL;
	mlx_clear_window(g_mydata.mlx_ptr, g_mydata.win_ptr);
	ft_draw_map();
	speed = 5;
	if (key == MAC_KEY_ESC)
	{
		mlx_destroy_window(g_mydata.mlx_ptr, g_mydata.win_ptr);
		exit(EXIT_SUCCESS);
	}
	else if (key == MAC_KEY_LEFT)
	{
		g_player.p_direction -= 10.0;
		ft_draw_player(g_player.p_x , g_player.p_y, radius);
	}
	else if (key == MAC_KEY_RIGHT)
	{
		g_player.p_direction += 10.0;
		ft_draw_player(g_player.p_x , g_player.p_y, radius);
	}
	else if (key == MAC_KEY_DOWN)
	{
	ft_player_vs_wall(g_player.p_x - (ft_cos(g_player.p_direction) * speed), g_player.p_y - (ft_sin(g_player.p_direction) * speed));
	if (!g_player.p_vs_wall)
	{
		g_player.p_x -= ft_cos(g_player.p_direction) * speed;
		g_player.p_y -= ft_sin(g_player.p_direction) * speed;
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	}
	}
	else if (key == MAC_KEY_UP)
	{
	ft_player_vs_wall(g_player.p_x - (ft_cos(g_player.p_direction) * speed), g_player.p_y - (ft_sin(g_player.p_direction) * speed));
	if (!g_player.p_vs_wall)
	{
		g_player.p_x += ft_cos(g_player.p_direction) * speed;
		g_player.p_y += ft_sin(g_player.p_direction) * speed;
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	}
	}
	else 
		ft_draw_player(g_player.p_x, g_player.p_y, radius);
	return (0);
}


int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		read_file(argv[1]);
		g_mydata.mlx_ptr = mlx_init();
		g_mydata.win_ptr = mlx_new_window(g_mydata.mlx_ptr, g_mydata.map_width *g_mydata.tile_size, g_mydata.map_height * g_mydata.tile_size, argv[1]);
		ft_select_p_view();
		ft_draw_map();
		ft_draw_player(g_player.p_x, g_player.p_y, 10);
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
