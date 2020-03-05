/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_line.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:44:24 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/05 21:17:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_check_map_line(char *str)
{
	int			i;
	static int	check_player;

	i = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]))
		{
			if (ft_isalpha(str[i]) && (str[i] == 'N' || str[i] == 'S'
						|| str[i] == 'E' || str[i] == 'W') && check_player == 0 && ++i)
				check_player = 1;
			else if (ft_isdigit(str[i]) && str[i] >= '0' && str[i] <= '2')
				i++;
			else
				ft_map_error();
		}
		else if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			ft_map_error();
	}
	return (i+1);
}
