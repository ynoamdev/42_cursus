/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sys_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 15:01:06 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/12 15:52:36 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** print the error and exit the programme;
*/

int	ft_sys_error(char *str)
{
	perror(ft_strjoin("cub3d: ", str));
	exit(errno);
	return (1);
}
