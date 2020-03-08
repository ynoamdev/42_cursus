/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/08 22:37:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void ft_draw_map(void)
{
	int *test;
	int		test_i;
	int		sizeline;
	int		endian;
	int i = 0;
	int j = 0;
	int k = 0;
	int g = 0;

	g_mydata.img_ptr_map = mlx_new_image(g_mydata.mlx_ptr, g_mydata.win_width, g_mydata.win_height);
	test = (int *)mlx_get_data_addr(g_mydata.img_ptr_map, &test_i, &sizeline, &endian);
	printf ("%d\n",test_i);
	printf ("%d\n",sizeline);
	printf ("%d\n",endian);
	while(i < g_mydata.map_height)
	{
		j = 0;
		while (j < (int)ft_strlen(g_mydata.map_ptr[i]))
		{
			if (g_mydata.map_ptr[i][j] == '1')
			{
				k = 0;
				while (k < 32)
				{
					g = 0;
					while (g < 32)
						test[(i*32) + (j*32) + (k*32) + g++] = GREEN;
					k++;
				}
			}
			j++;
		}
		i++;
	}
	mlx_put_image_to_window(g_mydata.mlx_ptr, g_mydata.win_ptr, g_mydata.img_ptr_map, 0, 0);

}

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
		ft_draw_circle(g_player.player_x -= 10, g_player.player_y, RED, raduis);
	else if (key == MAC_KEY_RIGHT)
		ft_draw_circle(g_player.player_x += 10, g_player.player_y, RED, raduis);
	else if (key == MAC_KEY_DOWN)
		ft_draw_circle(g_player.player_x, g_player.player_y += 10, RED, raduis);
	else if (key == MAC_KEY_UP)
		ft_draw_circle(g_player.player_x, g_player.player_y -= 10, RED, raduis);
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
