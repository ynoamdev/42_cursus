/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismap_begin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:48:03 by ynoam             #+#    #+#             */
/*   Updated: 2020/04/03 20:28:16 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

int	ft_ismap_begin(char *line)
{
	int i;

	i = 0;
	if (line == NULL)
		return (0);
	while (line[i] == ' ')
		i++;
	if (ft_isdigit(line[i]))
		return (1);
	return (0);
}
