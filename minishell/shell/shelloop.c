/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shelloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:41:19 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/23 18:57:42 by ynoam            ###   ########.fr       */
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
	int		i;

	i = 0;
	while (1)
	{
		prompt();
		line = read_line();
		command = ft_split(line, ' ');
		ft_putstr_fd(command[0], 1);
		while (command[i] != NULL)
			free(command[i++]);
		free(command[i]);
		free(command);
		free(line);
	}
}
