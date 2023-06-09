/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:00:15 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:00:17 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t countbyte)
{
	void	*p;

	p = malloc(count * countbyte);
	if (!p)
		return (0);
	ft_bzero(p, count * countbyte);
	return (p);
}
