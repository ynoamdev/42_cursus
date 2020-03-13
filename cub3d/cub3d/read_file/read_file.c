/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/13 19:29:53 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this function read the file file.cub.
*/

void	read_file(const char *str)
{
	int		fd;
	int		map;
	char	*line;
	char	*str2;

	map = 0;
	str2 = NULL;
	ft_check_file(str);
	if ((fd = open(str, O_RDONLY)) == -1)
		ft_sys_error((char*)str);
	while (get_next_line(fd, &line) && ++map)
	{
		if (ft_isdata_begin(line))
			selection((str2 = ft_strtrim(line, " \t")));
		else if (ft_ismap_begin(line))
			read_map(fd, map, line, (char*)str);
		else
			ft_isnothing(line);
//		ft_free(&line);
		ft_free(&str2);
	}
}
