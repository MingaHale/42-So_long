/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:58:08 by mminga            #+#    #+#             */
/*   Updated: 2023/03/24 08:03:33 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	recur_func(int **int_map, t_data *list, int x, int y)
{
	if (list->map[y][x] == 'P' || list->map[y][x] == 'C')
	{
		list->i_map.read_count++;
	}
	if (list->map[y][x + 1] != '1' && int_map[y][x + 1] < 1)
	{
		int_map[y][x + 1] = int_map[y][x] + 1;
		recur_func(int_map, list, x + 1, y);
	}
	if (list->map[y + 1][x] != '1' && int_map[y + 1][x] < 1)
	{
		int_map[y + 1][x] = int_map[y][x] + 1;
		recur_func(int_map, list, x, y + 1);
	}
	if (list->map[y][x - 1] != '1' && int_map[y][x - 1] < 1)
	{
		int_map[y][x - 1] = int_map[y][x] + 1;
		recur_func(int_map, list, x - 1, y);
	}
	if (list->map[y - 1][x] != '1' && int_map[y - 1][x] < 1)
	{
		int_map[y - 1][x] = int_map[y][x] + 1;
		recur_func(int_map, list, x, y - 1);
	}
}

static void	print(t_data *list, int **int_map)
{
	int	x;
	int	k;

	x = 0;
	k = 0;
	if (1)
	{
		if (list->i_map.read_count == list->coin_count + 1)
			ft_printf("\n\n>>>> MAP OK\n");
		ft_printf("\n>>>>Toplanan ulaşılabilir: %d", list->i_map.read_count);
		ft_printf("\n\n↓ VIRTUAL MAP ↓\n");
		while (x < list->map_height)
		{
			k = 0;
			ft_printf("\n");
			while (k < list->map_width)
			{
				ft_printf("%d ", int_map[x][k]);
				k++;
			}
			x++;
		}
		ft_printf("\n\n");
	}
}

static void	int_map_free(int **int_map, t_data *list)
{
	int	i;

	i = 0;
	while (i < list->map_height)
	{
		free(int_map[i]);
		i++;
	}
	free(int_map);
}

void	placeholder(t_data *list, int x, int y)
{
	int	**int_map;
	int	i;
	int	j;

	i = 0;
	j = 0;
	int_map = (int **)malloc(sizeof(int *) * list->map_height);
	while (i < list->map_height)
	{
		int_map[i] = (int *)malloc(sizeof(int) * list->map_width);
		j = 0;
		while (j < list->map_width)
		{
			int_map[i][j] = 0;
			j++;
		}
		i++;
	}
	int_map[y][x] = 1;
	list->i_map.read_count = 0;
	list->map[list->exit_y][list->exit_x] = 49;
	recur_func(int_map, list, x, y);
	list->map[list->exit_y][list->exit_x] = 'E';
	print(list, int_map);
	int_map_free(int_map, list);
}
