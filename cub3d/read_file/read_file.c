/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 12:04:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

/*
** this function read the file file.cub.
*/

void	read_file(const char *str)
{
	int		fd;
	int		map_begin_line;
	char	*line;
	char	*str2;

	map_begin_line = 0;
	str2 = NULL;
	ft_file_extention(str);
	if ((fd = open(str, O_RDONLY)) == -1)
		ft_sys_error((char *)str);
	while (get_next_line(fd, &line) && ++map_begin_line)
	{
		if (ft_isdata_begin(line))
		{
			selection((str2 = ft_strtrim(line, " \t")));
			ft_free(&line);
		}
		else if (ft_ismap_begin(line))
			read_map(fd, map_begin_line, line, (char*)str);
		else
			ft_isnothing(line);
		ft_free(&str2);
	}
	ft_free(&line);
}
