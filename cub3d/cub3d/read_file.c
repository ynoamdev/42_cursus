/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/28 22:24:41 by yousseff         ###   ########.fr       */
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
	if (((fd = open(str, O_RDONLY)) == -1) && ft_file_error())
		exit(EXIT_FAILURE);
	while (get_next_line(fd, &line) && (strime = ft_strtrim(line, "\t ")))
	{
		free(line);
		if (strime != NULL && ft_strlen(strime) > 3)
		{
			if (ft_isalpha(strime[0]))
			{
				selection(strime);
			}
			else if (ft_isdigit(strime[0]))
			{
				read_map(fd, lines);
				break ;
			}
		}
		free(strime);
		lines++;
	}
}
