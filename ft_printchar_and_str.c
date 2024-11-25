/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar_and_str.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:27 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/25 14:27:26 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_printstr(const char *str)
{
	int			i;
	int			len;
	const char	*s;

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
