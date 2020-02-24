/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shell.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ynoam <ynoam@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:05 by ynoam             #+#    #+#             */
/*   Updated: 2020/02/23 18:56:02 by ynoam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHELL_H
# define SHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "../libft/libft.h"

//int g_status;


char	*read_line(void);
void	prompt(void);
void	shelloop(void);

#endif
