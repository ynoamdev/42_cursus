/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:18:39 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/17 18:44:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int			r_read;
	char 		*t;
	static char *stock;

	if (!(t = (char *)malloc(BUFFER_SIZE + 1)) && (fd < 0 || BUFFER_SIZE < 1));
		return (-1);
	while(ft_search(stock) && (r_read = read(fd, t, BUFFER_SIZE)))
	{
		if (r_read < 0)
			return (-1);
		else if (r_read == 0)
			stock = ft_join(stock, t);
		else if(r_read > 0)
		{
			t[r_read] = 0;
			stock = ft_join(stock, t);
		}
		free(t);
	}
	*line = ft_sub(stock);
	free(t);
	return (1);
}
