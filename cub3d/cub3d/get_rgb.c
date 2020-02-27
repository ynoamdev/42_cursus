/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:56:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 21:20:57 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	get_rgb(char *str)
{
	char	**rgb;
	int		i;

	rgb = ft_split(str, ',');
	i = ft_atoi(rgb[0]) << 16;
	i |= ft_atoi(rgb[1]) << 8;
	i |= ft_atoi(rgb[2]);
	ft_free_double(rgb);
	free(rgb);
	return (i);
}
