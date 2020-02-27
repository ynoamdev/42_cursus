/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:31:44 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/27 15:35:49 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** print the error and exit the programme;
*/

int	ft_file_error(void)
{
	ft_putstr_fd("Error: File not good.\n", 2);
	exit(EXIT_FAILURE);
	return (1);
}
