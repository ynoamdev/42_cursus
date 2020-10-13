/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yousseff <ynoam@student.1337.ma>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 18:25:28 by yousseff          #+#    #+#             */
/*   Updated: 2020/05/15 12:24:06 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_FILE_H
# define READ_FILE_H

/*
** Librarys.
*/

# include "../libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "../draw/cub3d.h"

/*
** Global variables.
*/

struct		s_data
{
	char	**map_ptr;
	char	*texture_e;
	char	*texture_n;
	char	*texture_s;
	char	*texture_sprit;
	char	*texture_w;
	char	player_view;
	int		ceill;
	int		floor;
	int		map_height;
	int		map_width;
	int		win_height;
	int		win_width;
	void	*mlx_ptr;
	void	*win_ptr;
	float	mini_scal;
}			g_data;

/*
** functions.
*/

char		*get_texture(char *strim);
int			ft_check_file(const char *filename);
int			ft_check_map_line(char *str, int position);
int			ft_file_error(void);
int			ft_is_all_line_one(char *line);
int			ft_isdata_begin(char *line);
int			ft_ismap_begin(char *line);
int			ft_map_error(void);
int			ft_sys_error(char *str);
int			ft_take_map(char *filename, int map);
int			get_color(char *strim);
int			get_rgb(char *str);
void		fill_map(int from_line, const char *file);
void		ft_check_data(void);
void		ft_check_map(void);
void		ft_free_double_ptr(char ***str);
void		ft_init_data(void);
void		ft_isnothing(char *line);
void		get_resolution(char *strim);
void		read_file(const char *str);
void		read_map(int fd, int map, char *line, char *filename);
void		selection(char *line);

#endif
