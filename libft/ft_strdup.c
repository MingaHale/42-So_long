/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:04:44 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:05:14 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*final;
	int		i;

	i = 0;
	final = (char *) malloc(ft_strlen(s1) + 1);
	if (!final)
		return (0);
	while (*(s1 + i))
	{
		*(final + i) = *(s1 + i);
		i++;
	}
	*(final + i) = 0;
	return (final);
}
