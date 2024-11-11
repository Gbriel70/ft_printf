/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:51:36 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/11 10:54:33 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long ptr)
{
	int	i;

	i = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_print_hex(ptr);
	return (i);
}
