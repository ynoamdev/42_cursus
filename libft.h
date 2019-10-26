/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 23:27:04 by ynoam             #+#    #+#             */
/*   Updated: 2019/10/26 18:32:26 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(const char *string1, const char *string2, size_t n);
int		ft_strlen(char *str);
int		ft_memcmp(const void *string1, const void *string2, size_t n);
size_t	ft_strlcpy(char *distination, const char *source, size_t size);
size_t	ft_strlcat(char *distination, const char *source, size_t size);
char	*ft_itoa(int n);
char	*ft_substr(char const *string, unsigned int start, size_t lenth);
char	*ft_strtrim(char const *string, char const *set);
char	*ft_strrchr(const char *pointer_to_string, int c);
char	*ft_strnstr(const char *father, const char *son, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *string1, char const *string2);
char	*ft_strdup(const char *string);
char	*ft_strchr(char *src, int c);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_memset(void *byte, int c, size_t len);
void	*ft_memmove(void *distination, const void *source, size_t lenth);
void	*ft_memcpy(void *distination, const void *source, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *distination, const void *source, int c, size_t n);
void	ft_bzero(void *string, size_t n);
void	*ft_calloc(size_t count, size_t size);

#endif
