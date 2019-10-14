/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 19:09:59 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/14 12:28:04 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int    ft_strlen(const char *str);
char *ft_strnstr(const char *father, const char *son, size_t len)
{
    size_t x;
    const char *string;
    const char *string2;
    size_t lenth;

    lenth = ft_strlen(son);
    while (len-- >= lenth)
    {
        string = son;
        string2 = father;
        x = 0;
        while (*string2 == *string && *string != '\0')
        {
          string2++;
          string++;
            x++;
        }
        if(x == lenth)
            return ((char *)father);
        father++;    
    }
    return (0);
}
int    ft_strlen(const char *str)
{
    int size;

    size = 0;
    while (str[size] != '\0')
        size++;
    return (size);
}
