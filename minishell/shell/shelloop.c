/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shelloop.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 20:41:19 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/16 18:29:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libshell.h"

void	shelloop(void)
{
	char	**line;

	ft_putstr_fd("welcome\n", 1);
	while(1)
	{
		prompt();
		line = ft_split(read_line(), ' ');
		ft_putstr_fd(line[0], 1);
		while(*line != NULL)
		{
			free(*line);
			line++;
		}
		free(line);
	}
}
