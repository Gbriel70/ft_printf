/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:52 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/22 10:20:10 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int len_str(char *str);

int	ft_print_number(unsigned int nbr)
{
	int	count;

	count = 0;
	if (nbr >= 10)
		count += ft_print_number(nbr / 10);
	count += ft_printchar((nbr % 10) + '0');
	return (count);
}

int	ft_putnbr(int n, char *base)
{
	int		c;
	long	nbr;
	int		len_base;

	c = 0;
	nbr = n;
	len_base = len_str(base);
	if (nbr < 0)
	{
		c += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
	{
		//if (len_base == 16)
		//{
		c += ft_putnbr((nbr / len_base), base);
		//	c += write(1, &HEXADECIMAL_BASE[nbr % 16], 1);
		//}
		c += ft_putnbr((nbr / len_base), base);
	}
	c += ft_printchar((nbr % len_base) + '0');
	return (c);
}

static int len_str(char *str)
{
	char *len;
	
	len = str;
	while (*len)
		len++;
	return (len - str);
}
