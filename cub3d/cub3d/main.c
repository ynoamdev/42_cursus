/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 22:30:02 by yousseff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int ft_test(int key)
{
	mlx_clear_window(g_map.mlx_ptr, g_map.win_ptr);
	mlx_string_put(g_map.mlx_ptr, g_map.win_ptr,200+key, 100+key, 255 << 16 | 127 << 8 | 80, ft_itoa(key));
	//if(key == 53)
	if(key == 65307)
	{
	//	mlx_destroy_window(g_map.mlx_ptr, g_map.win_ptr);
		exit(EXIT_SUCCESS);
	}
	else
		printf("%d\n", key);
	return (0);
}

int main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		g_map.mlx_ptr = mlx_init();
		read_file(argv[1]);
		ft_check_data();
		g_map.win_ptr = mlx_new_window(g_map.mlx_ptr, g_map.win_width, g_map.win_height, argv[0]);
		mlx_key_hook(g_map.win_ptr, ft_test,  (void*)0);
		mlx_loop(g_map.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	ft_putstr_fd("Error: Argument.\n", 2);
	exit(EXIT_FAILURE);
	/*
	if (argc == 2)
	{
		g_map.mlx_ptr = mlx_init();
	    g_map.win_ptr = mlx_new_window(g_map.mlx_ptr, 900, 800, argv[0]);
	    mlx_string_put(g_map.mlx_ptr, g_map.win_ptr,200, 100, 255 << 16 | 127 << 8 | 80, "Read from file");
		mlx_key_hook(g_map.win_ptr, ft_test,  (void*)0);
		mlx_loop(g_map.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	ft_putstr_fd("Error: Argument.\n", 2);
	exit(EXIT_FAILURE);
	*/
}
