/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:07:09 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/23 16:34:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int fun(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i);
}

void	thefreefunction(char **ptr, int j)
{
	while (j > -1)
		free(&ptr[j--]);
	free(ptr);
}

char    **ft_split(char const *s, char c)
{
	char **ptrsplit;
	int i;
	int j;
	int x;
	int z;

	if (s == '\0' || c == '\0')
		return (0);
	i = 0;
	while ( s[i] == c)
		i++;
	x = 0;
	while (s[i])
	{
		if(s[i] != c && (s[i+1] == c || s[i+1] == '\0'))
			x++;
		i++;
	}
	if (!(ptrsplit = (char **)malloc(sizeof(char *)*(x + 1))))
		return (NULL);
	ptrsplit[x] = 0;
	i = 0;
	j = 0;
	while ( j < x)
	{
		while (s[i] == c )
			i++;
		if (! (ptrsplit[j] = (char *) malloc(sizeof(char) * fun(&s[i], c) + 1)))
		{
			thefreefunction(ptrsplit, j);
			return (NULL);
		}
		z = 0;
		while (s[i + z] != '\0' && s[i + z] != c)
		{
			ptrsplit[j][z] = (char )s[i + z];
			z++;
		}
		ptrsplit[j][z] = '\0';
		j++;
		i += z;
	}
	return (ptrsplit);
}
int	main(void)
{
	int i;
	int j;
	char **test = ft_split("   youssef    noam y    a        ssir noam", ' ');

	i = 0;
	j = 0;
	printf("   youssef    noam y    a        ssir noam\n");
	while (test[i] != '\0')
	{
		j = 0;
		while (test[i][j] != '\0')
			printf("%c", test[i][j++]);
		printf("\n");
		i++;
	}

	return (0);
}
