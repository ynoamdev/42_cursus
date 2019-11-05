/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:07:09 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/05 12:34:08 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		fun(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

static void		thefreefunction(char **ptr, int j)
{
	while (j)
		free(&ptr[j--]);
	free(ptr);
}

static int		thefillfun(int x, char c, char **ptrsplit, char const *s)
{
	int	j;
	int z;

	j = -1;
	while (++j < x)
	{
		while (*s++ == c)
			;
		if (!(ptrsplit[j] = (char *)malloc(sizeof(char) * fun(--s, c) + 1)))
		{
			thefreefunction(ptrsplit, j);
			return (0);
		}
		z = 0;
		while (*s != '\0' && *s != c)
			ptrsplit[j][z++] = *s++;
		ptrsplit[j][z] = '\0';
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	char	**ptrsplit;
	int		j;
	int		x;

	x = 0;
	if (s == NULL)
		return (NULL);
	j = -1;
	while (s[++j])
		if (s[j] != c && (s[j + 1] == c || s[j + 1] == '\0'))
			x++;
	if (!(ptrsplit = (char **)malloc(sizeof(char *) * (x + 1))))
		return (NULL);
	ptrsplit[x] = NULL;
	if (thefillfun(x, c, ptrsplit, s) == 0)
		return (NULL);
	return (ptrsplit);
}
