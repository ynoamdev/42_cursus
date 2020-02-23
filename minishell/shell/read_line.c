/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:56:21 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/23 18:58:37 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libshell.h"

char	*read_line(void)
{
	int		i;
	char	*buff;

	if ((buff = malloc(sizeof(char) * 1024)) == NULL)
		return (NULL);
	i = read(0, buff, 1023);
	buff[i] = '\0';
	return (buff);
}
