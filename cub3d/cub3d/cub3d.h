/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 22:27:36 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

typedef	struct
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		win_width;
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

t_cub	map;

void	fill_map(int from_line, const char *file);
int		ft_check_file(const char *filename);
int		ft_file_error(void);
int		ft_free_double(char **ptr);
int		ft_free_double_str(char **str);
int		ft_init_struct(int i);
void	get_color_c(char *strim);
void	get_color_f(char *strim);
int		get_height_weight(const char *file, int lines);
void	get_resolution(char *strim);
int		get_rgb(char *str);
void	get_texture_ea(char *strim);
void	get_texture_no(char *strim);
void	get_texture_s(char *strim);
void	get_texture_so(char *strim);
void	get_texture_we(char *strim);
void	read_file(const char *str);
void	read_map(int fd, int lines, const char *file);
void	selection(char *line);

#endif
