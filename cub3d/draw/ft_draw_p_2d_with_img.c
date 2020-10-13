/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_p_2d_with_img.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/15 20:43:22 by ynoam             #+#    #+#             */
/*   Updated: 2020/05/13 17:58:59 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_draw_p_2d_with_img(t_data2 *img)
{
	ft_draw_circle_with_img(img, MINIMAP_SCALE * g_player.x, MINIMAP_SCALE * g_player.y);
}
