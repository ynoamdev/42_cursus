/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 10:12:26 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/17 18:34:41 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_search(char *source)
{
	if (!source)
		return (1);
	while (source)
		if (*source++ == '\n')
			return (0);
	return (1);
}

size_t	ft_strlen( char *str)
{
	size_t	size;

	if (!str)
		return (0);
	size = 0;
	while (str[size])
		size++;
	return (size);
}
char	*ft_sub(char  *string)
{
	char	*baby;
	size_t	x;
	size_t	y;

	if (!(baby = malloc(ft_strlen(string) + 1)))
		return (NULL);
	y = ft_strlen(string)
	x = 0;
	while (x < y && string[x] != '\n')
	{
		baby[x] = string[x];
		x++;
	}
	baby[x] = '\0';
	return (baby);
}

char	*ft_join(char *string1, char *string2)
{
	char	*thenew;
	int		i;
	int		j;

	i = ft_strlen(string1);
	j = ft_strlen(string2);
	if (!(thenew = (char *)malloc(i + j + 1)))
		return (NULL);
	thenew[i + j] = 0;
	while (j--)
		thenew[i + j] = string2[j];
	while (i--)
		thenew[i] = string1[i];
	return (thenew);
}
