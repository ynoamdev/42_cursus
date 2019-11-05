/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 18:16:46 by ynoam             #+#    #+#             */
/*   Updated: 2019/11/05 18:09:19 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*returned;

	if (s == NULL || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(returned = (char *)malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		returned[i] = f(i, s[i]);
		i++;
	}
	returned[i] = '\0';
	return (returned);
}
