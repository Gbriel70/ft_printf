/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:52 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/11 10:54:22 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_number(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_print_number(nbr / 10);
	count += ft_printchar((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr(int n)
{
	int		c;
	long	nbr;

	c = 0;
	nbr = n;
	if (nbr < 0)
	{
		c += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		c += ft_putnbr(nbr / 10);
	c += ft_printchar((nbr % 10) + '0');
	return (c);
}
