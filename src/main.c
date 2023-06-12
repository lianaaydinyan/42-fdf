/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liaydiny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 01:04:42 by liaydiny          #+#    #+#             */
/*   Updated: 2023/06/11 01:04:43 by liaydiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"


void	file_opening(char **av, t_mapolo *data)
{
	int		openfile;
	char	*line;
	char	**splited;
	int		i;
	int		k;
	int		a;

	i = -1;
	k = -1;
	a = 0;
	line = NULL;
	openfile = open(av[1], O_RDONLY);
	if (openfile == -1)
		open_error();
	line = get_next_line(openfile);
	if(!line)
		next_line();
	printf("--------");
	while (line)
	{
		splited = ft_split(line, ' ');
		while(splited[++k])
			data->map[a][++i] = ft_atoi(line);
		line = get_next_line(openfile);
		a++;
	}
	k = -1;
	i = -1;
	while(data->map[++a])
		{
			while(data->map[a][++i])
				printf("%d",data->map[a][++i]);
			printf("\n\n");
		}
	data->width = ft_strlen(line);
	data->heigth = a;
	printf("%d\n[heigth]",data->heigth);
	printf("%d\n[width]",data->width);
}

int main(int ac, char **av)
{
	t_mapolo *data;

	data = NULL;

	// data = malloc(sizeof(t_mapolo) * 1);
	printf("--------");
	if (!data)
		return (0);
	if(ac != 2)
		args_error();
	file_opening(av, data);
}