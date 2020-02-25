/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:28:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 14:29:24 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(void)
{
	void *mlx_ptr;
	void *win_ptr;

	mlx_ptr = mlx_init();
	if (mlx_ptr == NULL)
	{
		perror("Error");
		exit(EXIT_FAILURE);
	}
	else
	{
		win_ptr = mlx_new_window(mlx_ptr, 500, 500, "test");
		mlx_loop(mlx_ptr);
	}
	exit(EXIT_SUCCESS);
}
