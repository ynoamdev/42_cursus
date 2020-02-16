/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_line.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root </var/mail/root>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 16:45:06 by root              #+#    #+#             */
/*   Updated: 2020/02/16 17:55:54 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libshell.h"

char	*read_line(void)
{
		int i;
		char *buff;

		if ((buff = malloc(sizeof(char) * 1024)) == NULL)
				return (NULL);
		i = read(0, buff, 1023);
		buff[i] = '\0';
		return (buff);
}
