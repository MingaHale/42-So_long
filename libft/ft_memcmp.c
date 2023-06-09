/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:03:53 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:03:57 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *dizi1, const void *dizi2, size_t boyut)
{
	size_t	i;

	i = 0;
	while (i < boyut)
	{
		if (((unsigned char *)dizi1)[i] != ((unsigned char *)dizi2)[i])
			return (((unsigned char *)dizi1)[i] - ((unsigned char *)dizi2)[i]);
		i++;
	}
	return (0);
}
