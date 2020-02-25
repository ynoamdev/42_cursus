/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 10:12:26 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/25 15:52:01 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_search(char *source)
{
	if (!source)
		return (1);
	while (*source)
		if (*source++ == '\n')
			return (0);
	return (1);
}

size_t	len(char *str)
{
	size_t	size;

	if (str == NULL)
		return (0);
	size = 0;
	while (str[size])
		size++;
	return (size);
}

char	*ft_sub(char *string)
{
	char	*baby;
	size_t	x;
	size_t	y;

	y = 0;
	x = 0;
	if (string == NULL)
	{
		if (!(baby = malloc(1)))
			return (NULL);
		baby[0] = 0;
		return (baby);
	}
	while (string[x] != '\0' && string[x] != '\n')
		x++;
	if (!(baby = malloc(x + 1)))
		return (NULL);
	baby[x] = '\0';
	while (y < x && (baby[y] = string[y]))
		y++;
	return (baby);
}

char	*ft_from_newline(char *string)
{
	char	*baby;
	size_t	x;
	size_t	y;
	size_t	z;

	x = 0;
	z = 0;
	y = 0;
	if (string == NULL)
		return (NULL);
	while (string[x] != '\n' && string[x] != '\0')
		x++;
	if (string[x] == '\0' && y == 0)
		x = 0;
	else if ((y = ++x))
		while (string[x] != '\0')
			x++;
	if (!(baby = malloc(x - y + 1)))
		return (NULL);
	while (y < x)
		baby[z++] = string[y++];
	baby[z] = '\0';
	ft_free(&string);
	return (baby);
}

char	*ft_join(char *string1, char *string2)
{
	char	*thenew;
	size_t	i;
	size_t	j;

	i = len(string1);
	j = len(string2);
	if (!(thenew = malloc(i + j + 1)))
		return (NULL);
	thenew[i + j] = 0;
	while (j--)
		thenew[i + j] = string2[j];
	while (i--)
		thenew[i] = string1[i];
	ft_free(&string1);
	return (thenew);
}
