/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdata_begin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 11:40:28 by ynoam             #+#    #+#             */
/*   Updated: 2020/04/03 20:22:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

int	ft_isdata_begin(char *line)
{
	int i;

	if (line == NULL)
		return (0);
	i = 0;
	while (line[i] == ' ' || line[i] == '\t')
		i++;
	if (ft_isalpha(line[i]))
		return (1);
	return (0);
}
