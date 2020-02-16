/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 16:43:37 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/16 17:55:01 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef shell_h
# define shell_h

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

//int g_status;


void	prompt(void);
void	shelloop(void);
char	*read_line(void);

#endif