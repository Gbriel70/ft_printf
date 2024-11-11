/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:11 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/11 10:51:12 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
