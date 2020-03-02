/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rgb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:56:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 11:56:00 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	get_rgb(char *str)
{
	char	**rgb;
	int		i;
	int		j;

	rgb = ft_split(str, ',');
	j = ft_atoi(rgb[0]);
	if (j < 0 || j > 255)
		return (0);
	i = j << 16;
	j = ft_atoi(rgb[1]);
	if (j < 0 || j > 255)
		return (0);
	i |= j << 8;
	j = ft_atoi(rgb[2]);
	if (j < 0 || j > 255)
		return (0);
	i |= j;
	ft_free_double(rgb);
	free(rgb);
	return (i);
}
