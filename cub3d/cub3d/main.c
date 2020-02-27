/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 21:28:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"
/*
int ft_test(int key)
{
	mlx_clear_window(map.mlx_ptr, map.win_ptr);
	mlx_string_put(map.mlx_ptr, map.win_ptr,200+key, 100+key, 255 << 16 | 127 << 8 | 80, ft_itoa(key));
	if(key == 53)
	{
		mlx_destroy_window(map.mlx_ptr, map.win_ptr);
		exit(EXIT_SUCCESS);
	}
	return (0);
}
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		map.mlx_ptr = mlx_init();
		/*
		printf ("%d", map.win_width);
		printf ("%d", map.win_height);
		read_file(argv[1]);
		printf ("%d", map.win_width);
		printf ("%d", map.win_height);
//		map.win_ptr = mlx_new_window(map.mlx_ptr, map.win_width, map.win_height, argv[0]);
//		mlx_loop(map.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	ft_putstr_fd("Error: Argument.\n", 2);
	exit(EXIT_FAILURE);
	*/
		/*
	if (argc == 2)
	{
		map.mlx_ptr = mlx_init();
	    map.win_ptr = mlx_new_window(map.mlx_ptr, 900, 800, argv[0]);
	    mlx_string_put(map.mlx_ptr, map.win_ptr,200, 100, 255 << 16 | 127 << 8 | 80, "Read from file");
		mlx_key_hook(map.win_ptr, ft_test,  (void*)0);
		mlx_loop(map.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	ft_putstr_fd("Error: Argument.\n", 2);
	exit(EXIT_FAILURE);
	*/
}
