/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:26:07 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/16 18:24:32 by yousseff         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

/*
** Read the file and give the rgb color.
*/

int		get_color(char *strim)
{
	char	**parts;
	int		i;

	i = 0;
	parts = ft_split(strim, ' ');
	while (parts[i++])
		;
	if (i != 3)
		ft_file_error();
	i = 0;
	while (parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
			break ;
	while (parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
			break ;
	while (parts[1][i])
		if (!(ft_isdigit(parts[1][i++])))
			break ;
	if ((i < 5 || i > 11))
		ft_file_error();
	i = get_rgb(parts[1]);
	ft_free_double_ptr(&parts);
	return (i);
}
