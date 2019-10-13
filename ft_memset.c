/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:26:52 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/12 13:36:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *byte, int c, size_t len)
{
	unsigned char *test;

	test = byte;
	while (len--)
		*test++ = (unsigned char)c;
	return (byte);
}
