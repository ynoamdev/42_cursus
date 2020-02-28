/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:44:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 20:25:44 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_check_map_line(char *str)
{
	int			i;
	int			j;
	static int	check_player;

	i = 0;
	j = 0;
	while(str[i])
	{
		if (ft_isalnum(str[i]))
		{
			if (ft_isalpha(str[i]) && check_player == 0 && ++j)
				check_player = 1;
			else if (ft_isdigit(str[i]))
				j++;
			else
				ft_map_error();
			i++;
		}
		else if (str[i] == ' ')
			i++;
		else
			ft_map_error();
	}
	return (j);
}
