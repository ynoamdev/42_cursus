/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:11:02 by ynoam             #+#    #+#             */
/*   Updated: 2019/12/03 22:30:55 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*ft_addtop(unsigned long int n);
char	*ft_all(**main_ptr);
char	*ft_convertion(char c, va_list ap);
char	*ft_ctoa(int c);
char	*ft_itoa(int n, int c);
char	*ft_itox(unsigned int n, char c);
char	*ft_strdup(const char *string);
char	*ft_strjoin(char *string1, char *string2);
char	*ft_uitoa(unsigned int n);
int		ft_atoi(const char *str);
int		ft_check_all(char c);
int		ft_free(char **ptr);
int		ft_is_flage(char c);
int		ft_isdigit(int c);
int		ft_printf(const char *p, ...);
int		ft_putstr(char *str);
size_t	ft_strlen(char *str);

#endif
