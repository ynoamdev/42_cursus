/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 15:18:39 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/19 23:12:15 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_free(char *stk)
{
	free(stk);
	stk = NULL;
	return (1);
}

int	get_next_line(int fd, char **line)
{
	ssize_t		r_read;
	char		*t;
	static char	*stk;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (-1);
	if (!(t = (char *)malloc(BUFFER_SIZE + 1)))
		return (-1);
	while (ft_search(stk) && (r_read = read(fd, t, BUFFER_SIZE)) != 0)
	{
		if (r_read == -1 && ft_free(t))
			return (-1);
		t[r_read] = '\0';
		if (!(stk = ft_join(stk, t)) && ft_free(stk) && ft_free(t))
			return (-1);
	}
	if (r_read != 0)
		ft_free(t);
	if (!(*line = ft_sub(stk)) && r_read != 0 && ft_free(stk))
		return (-1);
	t = stk;
	if (!(stk = ft_from_newline(stk)) && r_read != 0 && ft_free(stk))
		return (-1);
	ft_free(t);
	if (ft_free(stk))
		return (0);
	return (1);
}
