/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 15:38:07 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/12 15:38:09 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *string1, const char *string2, size_t n)
{
	while (n--)
	{
		if (*string1 != *string2)
			return (*string1 - *string2);
		*(string1++);
		*(string2++);
	}
	return (0);
}
