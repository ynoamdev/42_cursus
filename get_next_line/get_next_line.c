/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:18:39 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/17 21:31:07 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	int			r_read;
	char 		*t;
	char		*s
	static char *stock;

	if (fd < 0 || BUFFER_SIZE < 1 || !(t = (char *)malloc(BUFFER_SIZE + 1) 
				|| r_read = read(fd, t, BUFFER_SIZE) < 0))
		return (-1);
	while(ft_search(stock) && r_read)
	{
		t[r_read] = '\0';
		stock = ft_join(stock, t);
		free(t);
	}
	*line = ft_sub(stock);
	s = stock;
	stock = ft_sub_two(stock);
	free(s);
	if (r_read == 0)
		free(stock);
	return (1);
}
