/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shelloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:41:19 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/16 21:00:12 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libshell.h"

/*
** line 28 in for test.
*/

void	shelloop(void)
{
	char	**command;
	char	*line;

	while(1)
	{
		prompt();
		line = read_line();
		command = ft_split(line, ' ');
		ft_putstr_fd(command[0], 1);
		while(*command != NULL)
		{
			free(*command);
			command++;
		}
		free(*command);
		free(line);
	}
}
