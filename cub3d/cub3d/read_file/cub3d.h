/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/03 12:29:33 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <unistd.h>
# include <math.h>
# include <fcntl.h>
# include "../../libft/libft.h"

typedef struct
{
	char	*ptr_map;
	char	*texture_e;
	char	*texture_n;
	char	*texture_s;
	char	*texture_sprit;
	char	*texture_w;
	int		ceill;
	int		floor;
	int		win_height;
	int		win_width;
	void	*mlx_ptr;
	void	*win_ptr;
}			t_cub;

t_cub	g_map;

int		ft_check_file(const char *filename);
int		ft_file_error(void);
int		ft_free_double(char **ptr);
int		ft_free_double_str(char **str);
int		ft_init_struct(int i);
int		ft_map_error(void);
int		get_height_weight(const char *file, int lines);
int		get_rgb(char *str);
void	fill_map(int from_line, const char *file);
void	ft_check_data(void);
void	get_color_c(char *strim);
void	get_color_f(char *strim);
void	get_resolution(char *strim);
void	get_texture_ea(char *strim);
void	get_texture_no(char *strim);
void	get_texture_s(char *strim);
int		ft_check_map_line(char *str);
void	get_texture_so(char *strim);
void	get_texture_we(char *strim);
void	read_file(const char *str);
void	read_map(int fd, int lines);
void	selection(char *line);
int		ft_sys_error(char *str);

#endif
