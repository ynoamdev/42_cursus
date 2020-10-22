/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 19:54:44 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/22 12:09:12 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

/*
** print the error and exit the programme;
*/

int	ft_map_error(void)
{
	ft_putstr_fd("Error\ncub3d: The map is incorrect.\n", 2);
	exit(EXIT_FAILURE);
	return (1);
}
