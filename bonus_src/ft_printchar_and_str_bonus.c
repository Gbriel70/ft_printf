/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_and_str_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:29:39 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/22 15:10:22 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(const char *str)
{
	const char	*s;
	int			i;
	int			len;

	if (!str)
		return (ft_printstr("(null)"));
	s = str;
	i = 0;
	while (*s)
		s++;
	len = s - str;
	i += write(1, str, len);
	return (i);
}
