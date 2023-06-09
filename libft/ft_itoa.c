/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:01:19 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:01:22 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(int nbr)
{
	int	nbr_len;

	nbr_len = 0;
	if (nbr <= 0)
		nbr_len++;
	while (nbr)
	{
		nbr /= 10;
		nbr_len++;
	}
	return (nbr_len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*dizi;
	long	nbr;

	nbr = n;
	len = numlen(nbr);
	dizi = malloc(sizeof(char) * len + 1);
	if (!dizi)
		return (0);
	dizi[len--] = '\0';
	if (n < 0)
	{
		dizi[0] = '-';
		nbr = -nbr;
	}
	if (n == 0)
		dizi[0] = '0';
	while (nbr > 0)
	{
		dizi[len--] = nbr % 10 + 48;
		nbr /= 10;
	}
	return (dizi);
}
