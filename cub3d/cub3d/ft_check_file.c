/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:13:10 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/26 12:17:46 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_check_file(const char *file, t_cub *map)
{
	int i;

	i = 0;
	while (file[i])
		if (file[i++] == '.')
			break ;
	if (file[i++] == 'c')
		if (file[i++] == 'u')
			if (file[i++] == 'b')
				if (file[i] == '\0')
					return (0);
	ft_putstr_fd("Error : File Extention.\n", 2);
	free(map);
	exit(1);
}
