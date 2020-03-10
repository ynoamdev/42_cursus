/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 10:13:10 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/09 14:32:39 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_check_file(const char *filename)
{
	int i;
	int j;

	j = ft_strlen(filename) - 1;
	if (j > 4)
	{
		i = j - 3;
		if (filename[i++] == '.')
			if (filename[i++] == 'c')
				if (filename[i++] == 'u')
					if (filename[i++] == 'b')
						return (0);
	}
	ft_putstr_fd("Error: filename Extention.\n", 2);
	exit(EXIT_FAILURE);
}
