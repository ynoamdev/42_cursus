/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/02 15:54:51 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this function read the file file.cub and init the stucture g_map;
*/

void	read_file(const char *str)
{
	int		fd;
	int		lines;
	char	*line;
	char	*strime;

	lines = 0;
	if (((fd = open(str, O_RDONLY)) == -1) && ft_sys_error((char*)str))
		exit(EXIT_FAILURE);
	while (get_next_line(fd, &line) && (strime = ft_strtrim(line, "\t ")))
	{
		ft_free(&line);
		if (strime != NULL)
		{
			if (ft_isalpha(strime[0]))
				selection(strime);
			else if (ft_isdigit(strime[0]))
			{
				read_map(fd, lines);
				break ;
			}
		}
		ft_free(&strime);
		lines++;
	}
}