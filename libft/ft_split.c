/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 11:32:36 by mminga            #+#    #+#             */
/*   Updated: 2023/03/24 08:01:03 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strsay(char const *str, char c)
{
	int	str_say;

	str_say = 0;
	while (*str)
	{
		if (*str == c)
			str++;
		else
		{
			str_say++;
			while (*str && *str != c)
				str++;
		}
	}
	return (str_say);
}

static char	**ft_place(char **new, char const *s, char c, int top_str)
{
	int	index;
	int	str_len;
	int	str_say;

	str_len = 0;
	index = 0;
	str_say = 0;
	while (str_say < top_str)
	{
		while (s[index] && s[index] == c)
			index++;
		str_len = 0;
		while (s[index] && s[index] != c)
		{
			str_len++;
			index++;
		}
		new[str_say] = ft_substr(s, index - str_len, str_len);
		str_say++;
	}
	new[str_say] = 0;
	return (new);
}

char	**ft_split(const char *s, char c)
{
	char	**new;
	int		top_str;

	if (!s)
		return (0);
	top_str = ft_strsay(s, c);
	new = (char **)malloc(sizeof(char *) * top_str + 1);
	if (!new)
		return (0);
	ft_place(new, s, c, top_str);
	return (new);
}
