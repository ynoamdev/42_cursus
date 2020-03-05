/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/05 16:35:28 by ynoam            ###   ########.fr       */
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
	char	**ptr_map;
	char	*texture_e;
	char	*texture_n;
	char	*texture_s;
	char	*texture_sprit;
	char	*texture_w;
	int		ceill;
	int		floor;
	int		map_height;
	int		map_width;
	int		win_height;
	int		win_width;
	void	*mlx_ptr;
	void	*win_ptr;
}			g_s_mydata;

struct		s_player
{
	float	x;
	float	y;
}			g_s_player;

/*
** My data type.
*/

/*
** My functions.
*/

int			ft_check_file(const char *filename);
int			ft_check_map_line(char *str);
int			ft_file_error(void);
int			ft_free_double(char **ptr);
int			ft_free_double_str(char **str);
int			ft_init_data(void);
int			ft_isdata_begin(char *line);
int			ft_ismap_begin(char *line);
int			ft_isnothing(char *line);
int			ft_map_error(void);
int			ft_sys_error(char *str);
int			ft_take_map(char *filename, int map);
int			get_height_weight(const char *file, int lines);
int			get_rgb(char *str);
void		fill_map(int from_line, const char *file);
void		ft_check_data(void);
void		get_color_c(char *strim);
void		get_color_f(char *strim);
void		get_resolution(char *strim);
void		get_texture_ea(char *strim);
void		get_texture_no(char *strim);
void		get_texture_s(char *strim);
void		get_texture_so(char *strim);
void		get_texture_we(char *strim);
void		read_file(const char *str);
void		read_map(int fd, int map, char *line, char *filename);
void		selection(char *line);

#endif
