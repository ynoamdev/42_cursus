/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 16:22:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

typedef	struct
{
	int		win_wight;
	int		win_height;
	char	*texture_n;
	char	*texture_s;
	char	*texture_w;
	char	*texture_e;
	char	*texture_sprit;
	int		floor;
	int		ceill;
	char	**ptr_matrix;
}			t_cub;

typedef struct
{
	int	map_line;
	int	map_column;
}		t_h_w;

#endif
