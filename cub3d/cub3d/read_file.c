/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 14:30:29 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 22:58:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** this function read the file file.cub and init the stucture map;
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
		printf("read file call\n");
		free(line);
		if (strime != NULL && ft_strlen(strime) > 3)
		{
			printf("read file call\n");
			if (ft_isalpha(strime[0]))
			{
				printf("read file call\n");
				selection(strime);
				free(strime);
			}
			else if (ft_isdigit(strime[0]))
			{
				read_map(fd, lines, str);
				break ;
			}
		}
		free(strime);
		lines++;
	}
}
