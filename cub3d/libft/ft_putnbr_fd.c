/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 22:33:38 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/05 10:43:22 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	test;
	char			nega;
	char			copy;

	nega = '-';
	test = n;
	if (n < 0)
	{
		write(fd, &nega, 1);
		test = n * -1;
	}
	if (test < 10)
	{
		copy = test + '0';
		write(fd, &copy, 1);
	}
	else
	{
		ft_putnbr_fd(test / 10, fd);
		test %= 10;
		copy = test + '0';
		write(fd, &copy, 1);
	}
}
