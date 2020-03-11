/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/11 17:58:18 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The variable endian is little because the representation , example:
** int 0x01234567
** 67 45 23 01
** the representation is the inverse.
*/

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

# define LINUX_KEY_ESC 		65307
# define MAC_DOWN_ARROW		125
# define MAC_KEY_ESC		53
# define MAC_LEFT_ARROW		123
# define MAC_RIGHT_ARROW	124
# define MAC_UP_ARROW		126
# define MAC_KEY_H			4
# define MAC_KEY_J			38
# define MAC_KEY_K			40
# define MAC_KEY_L			37

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
	char	player_view;
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
	double	fov;
}			g_data;

struct		s_player
{
	double	rotation;
	double	direction;
	double	x;
	double	y;
	double	mov_speed;
	double	radius;
}			g_player;

/*
** My data type.
*/

/*
** My functions.
*/

char		*get_texture(char *strim);
double		ft_cos(double angle);
double		ft_sin(double angle);
int			ft_check_file(const char *filename);
int			ft_check_map_line(char *str, int position);
int			ft_file_error(void);
void		ft_free_double_ptr(char ***str);
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
void		ft_player_vs_wall(double x, double y);
void		ft_check_data(void);
void		ft_check_map(void);
void		ft_draw_circle(int x, int y, int color);
void		ft_draw_map(void);
void		ft_draw_player(int rot, int walk);
void		ft_draw_square(int x, int y, int color);
void		ft_select_p_view(void);
void		get_resolution(char *strim);
void		read_file(const char *str);
void		read_map(int fd, int map, char *line, char *filename);
void		selection(char *line);

#endif
