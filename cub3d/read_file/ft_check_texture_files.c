/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_texture_files.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 18:57:11 by ynoam             #+#    #+#             */
/*   Updated: 2020/10/19 14:19:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read_file.h"

void	ft_check_texture_files(void)
{
	int	arr[5];

	if ((arr[0] = open(g_txtr_sprit.file, O_RDONLY)) && arr[0] == -1)
		ft_sys_error(g_txtr_sprit.file);
	else if ((arr[1] = open(g_txtr_e.file, O_RDONLY)) && arr[1] == -1)
		ft_sys_error(g_txtr_e.file);
	else if ((arr[2] = open(g_txtr_s.file, O_RDONLY)) && arr[2] == -1)
		ft_sys_error(g_txtr_s.file);
	else if ((arr[3] = open(g_txtr_w.file, O_RDONLY)) && arr[3] == -1)
		ft_sys_error(g_txtr_w.file);
	else if ((arr[4] = open(g_txtr_n.file, O_RDONLY)) && arr[4] == -1)
		ft_sys_error(g_txtr_n.file);
	close(arr[0]);
	close(arr[1]);
	close(arr[2]);
	close(arr[3]);
	close(arr[4]);
}
