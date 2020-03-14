/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sys_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:01:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/13 19:18:23 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** print the error and exit the programme;
*/

int	ft_sys_error(char *str)
{
	ft_putstr_fd("cub3d: ", 2);
	perror(str);
	exit(errno);
	return (1);
}
