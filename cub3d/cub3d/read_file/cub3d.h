/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/08 15:39:20 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

/*
** Librarys.
*/

# include "../../libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

/*
** Macro for KEYBORD BUTTON.
*/

# define MAC_KEY_DOWN	125
# define MAC_KEY_ESC	53
# define LINUX_KEY_ESC  65307
# define MAC_KEY_LEFT	123
# define MAC_KEY_RIGHT	124
# define MAC_KEY_UP		126

/*
** Macros.
*/

# define FOV_ANGLE		(60 * (M_PI / 180))
# define TWO_PI			(M_PI * 2.0)

/*
** Macro for Colors.
*/

# define BLEU			(255)
# define GREEN			(255 << 8)
# define ORANGE			(255 << 16 | 127 << 8)
# define RED			(255 << 16)
# define VIOLET			(139 << 16 | 255)
# define YELLOW			(255 << 16 | 255 << 8)

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
	int		ceill;
	int		floor;
	int		map_height;
	int		map_width;
	int		square_height;
	int		square_width;
	int		tile_size;
	int		win_height;
	int		win_width;
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr_map;
}			g_mydata;

struct		s_player
{
	int		player_x;
	int		player_y;
}			g_player;

/*
** My data type.
*/

/*
** My functions.
*/

char		*get_texture(char *strim);
int			ft_check_file(const char *filename);
int			ft_check_map_line(char *str, int position);
int			ft_file_error(void);
int			ft_free_double(char **ptr);
int			ft_free_double_str(char **str);
int			ft_init_data(void);
int			ft_is_all_line_one(char *line);
int			ft_isdata_begin(char *line);
int			ft_ismap_begin(char *line);
int			ft_isnothing(char *line);
int			ft_map_error(void);
int			ft_sys_error(char *str);
int			ft_take_map(char *filename, int map);
int			get_color(char *strim);
int			get_height_weight(const char *file, int lines);
int			get_rgb(char *str);
void		fill_map(int from_line, const char *file);
void		ft_check_data(void);
void		ft_check_map(void);
void		ft_draw_circle(int x, int y, int color, int radius);
void		ft_draw_map(void);
void		ft_draw_square(int x, int y, int color);
void		get_resolution(char *strim);
void		read_file(const char *str);
void		read_map(int fd, int map, char *line, char *filename);
void		selection(char *line);

#endif
