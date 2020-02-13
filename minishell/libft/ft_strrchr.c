/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 14:01:24 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/28 15:38:34 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *pointer_to_string, int c)
{
	int counter;

	counter = 1;
	while (*pointer_to_string != 0 && counter)
	{
		pointer_to_string++;
		counter++;
	}
	while (counter--)
	{
		if (*pointer_to_string == c)
			return ((char *)pointer_to_string);
		pointer_to_string--;
	}
	return (0);
}
