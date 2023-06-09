/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminga <mminga@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 15:08:11 by mminga            #+#    #+#             */
/*   Updated: 2023/03/23 15:08:14 by mminga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

void	ft_putchar(int x, int *index);
void	ft_putstr(char *neww, int *byte);
void	ft_putnumber(int x, int *byte);
void	ft_putunsigned(unsigned int x, int *byte);
void	ft_puthex(unsigned int n, int type, int *byte);
void	ft_putaddress(unsigned long long n, int *byte);

int		ft_printf(const	char *str, ...);

#endif
