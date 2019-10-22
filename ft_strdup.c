/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/19 18:49:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/20 15:49:31 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

char	*ft_strdup(const char *string)
{
	char	*ptrtocpy;
	int		x;

	ptrtocpy = (char *)malloc(ft_strlen((char *)string));
	if (ptrtocpy == 0)
		return (0);
	x = ft_strlen((char *)string);
	while (x-- >= 0)
		ptrtocpy[x] = string[x];
	return (ptrtocpy);
}
