/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaydiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:04:58 by liaydiny          #+#    #+#             */
/*   Updated: 2023/06/11 01:05:00 by liaydiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
 # define FDF_H

typedef struct s_mapolo
{
	int		**map;
	int		heigth;
	int		width;
} t_mapolo;



#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "../libb/libft.h"
#include "get_next_line.h"
#include <stdio.h>

void args_error(void);
void	open_error(void);
void	file_opening(char **av, t_mapolo *data);
void	next_line(void);

# endif