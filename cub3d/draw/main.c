/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/24 22:59:02 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 12:03:51 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this the main function of this programme.
*/

int	main(int argc, char *argv[])
{
	if (argc == 2 || argc == 3)
	{
		ft_setup(argv[1]);
		ft_draw();
		mlx_hook(g_data.win_ptr, 2, 1L << 0, ft_loop, (void *)0);
		mlx_hook(g_data.win_ptr, 17, 0, ft_red_bouton, (void *)0);
		mlx_loop(g_data.mlx_ptr);
		exit(EXIT_SUCCESS);
	}
	else if (argc > 3)
	{
		ft_putstr_fd("Error\n", 2);
		ft_putstr_fd("cub3d", 2);
		ft_putstr_fd(": ", 2);
		ft_putstr_fd(strerror(7), 2);
		ft_putstr_fd(".\n", 2);
		exit(7);
	}
	else
		ft_putstr_fd("Error\ncub3d: no input files.\n", 2);
	exit(EXIT_FAILURE);
}
