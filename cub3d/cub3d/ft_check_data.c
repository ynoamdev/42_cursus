/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_data.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 12:02:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 12:11:17 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_data(void)
{
	if (!map.texture_n || !map.texture_s || !map.texture_w
			|| !map.texture_e || !map.texture_sprit || !map.ptr_matrix)
		ft_file_error();
	else if (!map.win_width || !map.win_height || !map.floor || !map.ceill)
		ft_file_error();
}
