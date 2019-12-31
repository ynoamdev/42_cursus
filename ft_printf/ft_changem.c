/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_changem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 21:14:29 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/31 20:47:21 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_changem(char **p, va_list ap)
{
	int sp_zr;
	int j;

	ft_init(&sp_zr, &j);
	if (**p == '-' && (*p)++)
		j = 2;
	if (**p == '0' && (*p)++)
		j = 1;
	sp_zr = ft_atoi(p, ap);
	if (sp_zr < 0 && (j = 2))
		sp_zr = -sp_zr ;
	while (ft_is_flage(**p))
		(*p)++;
	(*p)++;
	return (ft_mod(sp_zr - 1, j));
}
