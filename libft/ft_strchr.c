/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:05:33 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:05:33 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (c > 255)
		c -= 256;
	while (*(str + i))
	{
		if (*(str + i) == c)
			return ((char *)(str + i));
		i++;
	}
	if (*(str + i) == c)
		return ((char *)str + i);
	return (NULL);
}
