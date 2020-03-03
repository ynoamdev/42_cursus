/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 22:12:02 by ynoam             #+#    #+#             */
/*   Updated: 2020/03/03 12:27:48 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 1024

# include <stdlib.h>
# include <unistd.h>


char	*ft_join(char *string1, char *string2);
int		ft_free(char **stk);
char	*ft_sub(char *string);
char	*ft_from_newline(char *string);
int		ft_search(char *source);
size_t	len(char *str);
int		get_next_line(int fd, char **line);

#endif
