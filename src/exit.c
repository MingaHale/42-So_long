/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 14:59:22 by mminga            #+#    #+#             */
/*   Updated: 2023/03/24 13:43:23 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	err_msg(char *msg)
{
	ft_printf("%s", msg);
	exit (0);
}

int	mouse_hook(int mousecode, t_data *data)
{
	(void)mousecode;
	(void)data;
	err_msg("Exit Success");
	return (0);
}

int	exit_door(t_data *data)
{
	if (data->coin_collected == data->coin_count)
	{
		ft_printf("\n>>>>Toplam Hareket: %d\n", data->step_count);
		err_msg("FINISH");
	}
	else if (data->coin_collected != data->coin_count)
		return (1);
	return (0);
}
