/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_texture_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 19:08:36 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/18 11:44:12 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int	ft_texture_error(char *str)
{
	ft_putstr_fd("wolf: error: ", 2);
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
	return (1);
}
