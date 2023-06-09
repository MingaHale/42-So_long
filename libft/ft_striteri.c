/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:04:44 by mminga            #+#    #+#             */
/*   Updated: 2023/03/24 08:01:22 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*ft_func)(unsigned int, char*))
{
	unsigned int	index;

	if (str)
	{
		index = 0;
		while (*str)
			ft_func(index++, str++);
	}
}
