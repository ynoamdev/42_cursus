/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shelloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:41:19 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/24 21:11:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./shell.h"

/*
** line 28 in for test.
*/

void	shelloop(void)
{
	char	**command;
	char	*line;
	int		i;

	i = 0;
	while (1)
	{
		prompt();
		line = read_line();
		command = ft_split(line, ' ');
		free(line);
		ft_putstr_fd(command[0], 1);
		execute(command);
		while (command[i] != NULL)
			free(command[i++]);
		free(command[i]);
		free(command);
	}
}
