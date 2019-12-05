/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 15:59:48 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/04 16:20:29 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_check_all(char c)
{
	if (c == 'c' || c == 's' || c == 'x' || c == 'X' || c == 'p' || c == 'u'
			|| c == 'i' || c == 'd' || c == '*' || c == '.' || c == '-'
			|| ft_isdigit(c))
		return (1);
	return (0);
}