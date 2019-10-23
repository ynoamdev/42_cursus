/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 23:59:29 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/23 19:08:32 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		forword(char const *forstr, char const *forset)
{
	int	beging;
	int	counter;
	int	var;

	beging = 0;
	while (forstr[beging])
	{
		counter = 0;
		var = 0;
		while (forset[counter])
		{
			if (forstr[beging] == forset[counter])
			{
				var++;
				beging++;
				break ;
			}
			counter++;
		}
		if (!(forset[counter]) && !var)
			break ;
	}
	return (beging);
}

static int		backword(char const *backstr, char const *backset, int ending)
{
	int	beging;
	int	var;
	int	counter;

	beging = forword(backstr, backset);
	while (ending > beging)
	{
		counter = 0;
		var = 0;
		while (backset[counter])
		{
			if (backstr[ending] == backset[counter])
			{
				var++;
				ending--;
				break ;
			}
			counter++;
		}
		if (!(backset[counter]) && !var)
			break ;
	}
	return (ending);
}

char			*ft_strtrim(char const *string, char const *set)
{
	char	*trime;
	int		beging;
	int		ending;

	if (string == NULL && set == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)string);
	beging = forword(string, set);
	ending = beging;
	while (string[ending])
		ending++;
	ending--;
	ending = backword(string, set, ending);
	if (!(trime = (char *)malloc(ending - beging + 2)))
		return (NULL);
	trime += ending - beging + 1;
	*trime-- = 0;
	while (beging <= ending)
		*trime-- = string[ending--];
	return (++trime);
}
