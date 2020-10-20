/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:26:58 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/20 09:26:26 by ynoam            ###   ########.fr       */
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
** Include header files.
*/

# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <math.h>
# include <mlx.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include "../../libft/libft.h"
# include "../read_file/read_file.h"

/*
** Macros for LINUX.
*/

# define LINUX_KEY_ESC 		65307
# define LINUX_DOWN_ARROW	65364
# define LINUX_LEFT_ARROW	65361
# define LINUX_RIGHT_ARROW	65363
# define LINUX_UP_ARROW		65362
# define LINUX_KEY_H		104
# define LINUX_KEY_J		106
# define LINUX_KEY_K		107
# define LINUX_KEY_L		108

/*
** Macros for MAC.
*/

# define MAC_DOWN_ARROW		125
# define MAC_KEY_ESC		53
# define MAC_LEFT_ARROW		123
# define MAC_RIGHT_ARROW	124
# define MAC_UP_ARROW		126
# define MAC_KEY_H			4
# define MAC_KEY_J			38
# define MAC_KEY_K			40
# define MAC_KEY_L			37
# define MAC_KEY_W			13
# define MAC_KEY_A			0
# define MAC_KEY_S			1
# define MAC_KEY_D			2

/*
** Macros.
*/

# define FOV_ANGLE			60
# define FALSE				0
# define TRUE				1
# define TILE_SIZE			32
# define MINIMAP_SCALE		0.4

/*
** Macro for Colors.
*/

# define BLEU			255
# define GREEN			(119 << 16 | 122 << 8 | 135)
# define ORANGE			(255 << 16 | 127 << 8)
# define RED			(255 << 16)
# define VIOLET			(139 << 16 | 255)
# define YELLOW			(255 << 16 | 255 << 8)
# define WHITE			(255 << 16 | 255 << 8 | 255)

/*
** Global variables.
*/

/*
** Player data.
** x, y the position of the player in the win.
** direction = the direction of the view of the player.
** mov_speed = how many pixels the player move one time.
** if (walk = 1) = go forward.
** if (walk = -1) = go backward.
** turn = 1 , go left, turn = -1 , go right.
*/

struct		s_player
{
	float	rotation;
	float	direction;
	float	x;
	float	y;
	float	mov_speed;
	float	radius;
	int		walk;
	int		turn;
	int		lateral;
}			g_player;

/*
** My data type.
*/

typedef  struct		s_ray
{
	float	ray_angle;
	float	wall_hitx;
	float	wall_hity;
	float	distance;
	int	was_hit_ver;
	int	is_rayfacing_up;
	int	is_rayfacing_down;
	int	is_rayfacing_left;
	int	is_rayfacing_right;
	int	wall_content;
}			t_rays;

typedef	struct	s_images
{
    void	*img;
    char	*addr;
    int		bits_per_pixel;
    int		line_length;
    int		endian;
}				t_images;

struct s_texture
{
	char	*file;
    void	*img;
    char	*addr;
	int		width;
	int		height;
	int		bpp;
	int		line_length;
	int		endian;
};
struct s_texture g_txtr_n;
struct s_texture g_txtr_e;
struct s_texture g_txtr_s;
struct s_texture g_txtr_w;
struct s_texture g_txtr_sprit;


/*
** My functions.
*/

void	ft_draw_rays_with_img(t_images *img, t_rays rays[]);
void	ft_draw_column(t_images *img, float x, float y, float height);
void	ft_draw_3d(t_images *img, t_rays ray[]);
void	cast_all_rays(t_rays l_rays[]);
void	my_mlx_pixel_put(t_images *data, int x, int y, int color);
void	ft_check_data(void);
void	cast_ray(t_rays *pointer);
void	ft_addr_of_texture_img();
double	ft_cos(double angle);
double	ft_sin(double angle);
float	ft_tan(float l_angle);
void	ft_ray_is_facing(t_rays *ray);
int		has_wall_at(float x, float y);
void	ft_draw(void);
void	ft_draw_circle(double x, double y);
void	ft_draw_map_2d(void);
void	ft_draw_player(void);
void	ft_draw_square(int x, int y, int color);
void	ft_init_p_view(void);
void	ft_setup(const char *file);
void	ft_update(int l_key);
void	ft_draw_all_rays(t_rays l_rays[]);
int		ft_loop(int l_key);
int		ft_texture_error(char *str);
int		ft_red_bouton(int key);
void	ft_draw_circle_with_img(t_images *img, float x, float y);
void	ft_draw_map_2d_with_img(t_images *img);
void	ft_draw_p_2d_with_img(t_images *img);
void	ft_draw_square_with_img(t_images *img, int x, int y, int color);
void	ft_draw_p_direction(t_images *img);
float	ft_distance(float x, float y);
void	ft_update_player(void);
void	ft_check_texture(void);

#endif
