/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 11:41:37 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/28 21:45:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int		ft_all(char **p, va_list ap)
{
	int	space;
	int	zero;
	int	bd;
	int	bz;

	bz = 0;
	ft_init(&space, &zero, &bd);
	if (ft_is_flage(**p))
		while (ft_is_flage(**p))
			if (**p == '.' && (*p)++ && (bd = 1))
				zero = ft_atoi(p, ap);
			else if (**p == '0' && ++bz && (zero = ft_atoi(p, ap)))
			{
				if (**p == '.' && ++bd && (ft_isdigit(*(*p + 1) || *(*p + 1) == '*')))
					space = zero;
			}
			else if (**p == '-' || ft_isdigit(**p) || **p == '*')
				space = ft_atoi(p, ap);
	if (**p == 's')
		ft_changes(&space, &zero, bz, bd);
	else if (**p == 'd' || **p == 'i' || **p == 'x' || **p == 'X' || **p == 'u')
		ft_changed(&space, &zero, bz, bd);
	else if (**p == 'p' && bd == 0)
		zero = -1;
	else if (**p == '%')
		ft_changem(&space, &zero, bz, bd);
	space = ft_f1(space, zero, **p, ft_cnv(p, ap));
	(*ptr)++;
	return (space);
}
