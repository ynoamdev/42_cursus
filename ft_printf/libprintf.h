/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 18:11:02 by ynoam             #+#    #+#             */
/*   Updated: 2020/01/01 15:17:27 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# define MAX_INT 2147483647
# define TRUE 1
# define FALSE 0

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*ft_addtop(unsigned long int n);
char	*ft_cnv(char **c, va_list ap, int i);
char	*ft_ctoa(int c);
char	*ft_itoa(int n);
char	*ft_itox(unsigned int n, char c);
char	*ft_strdup(const char *string);
char	*ft_strjoin(char *string1, char *string2);
char	*ft_uitoa(unsigned int n);

int		ft_all(char **ptr, va_list ap, int sp, int zr);
int		ft_atoi(char **str, va_list ap);
int		ft_c(char *s, int sp);
int		ft_changem(char **p, va_list ap);
int		ft_d_u_i(int sp, int zr, char *s);
int		ft_f1(int sp, int zr, char ptr, char *s);
int		ft_free(char **ptr);
int		ft_intlen(unsigned int n);
int		ft_is_flage(char c);
int		ft_isdigit(int c);
int		ft_mod(int sp, int zr);
int		ft_p(char *s, int sp, int zr);
int		ft_printf(const char *p, ...);
int		ft_putstr(char *str, char c);
int		ft_s(char *s, int sp, int zr);
int		ft_space(int num);
int		ft_zero(int num);
int		ft_ismod(char **p);

size_t	ft_strlen(char *str);

void	ft_changed(int *space, int *zero, int banzero, int bandot);
void	ft_changes(int *space, int *zero, int banzero, int bandot);
void	ft_init(int *var1, int *var2);

#endif
