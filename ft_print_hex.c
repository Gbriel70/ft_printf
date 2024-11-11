/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:59 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/11 10:54:54 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		i += ft_print_hex(nbr / 16);
	i += write(1, &hex[nbr % 16], 1);
	return (i);
}

int	ft_print_uper_hex(unsigned int nbr)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		i += ft_print_uper_hex(nbr / 16);
	i += write(1, &hex[nbr % 16], 1);
	return (i);
}
