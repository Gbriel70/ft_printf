/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:50:32 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/22 13:44:54 by gcosta-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_value(char input, va_list args)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += ft_printchar(va_arg(args, int));
	else if (input == 's')
		i += ft_printstr(va_arg(args, char *));
	else if (input == 'p')
		i += ft_print_pointer(va_arg(args, unsigned long), HEXADECIMAL_BASE);
	else if (input == 'd' || input == 'i')
		i += ft_putnbr_base(va_arg(args, int), DECIMAL_BASE);
	else if (input == 'u')
		i += ft_putnbr_base(va_arg(args, unsigned int),DECIMAL_BASE);
	else if (input == 'x')
		i += ft_putnbr_base(va_arg(args, unsigned int), HEXADECIMAL_BASE);
	else if (input == 'X')
		i += ft_putnbr_base(va_arg(args, unsigned int), UPER_HEXADECIMAL_BASE);
	else if (input == '%')
		i += ft_printchar('%');
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		print_l;

	if (!input)
		return (-1);
	print_l = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			print_l += check_value(*input, args);
		}
		else
		{
			print_l += ft_printchar(*input);
		}
		input++;
	}
	va_end(args);
	return (print_l);
}

// #include <stdio.h>
// int main()
// {
// 	// long a = LONG_MIN;
// 	// long b = LONG_MAX;
// 	// long *ptr1 = &a;
// 	// long *ptr2 = &b;
// 	ft_printf(0);
// 	printf("\n");
// 	printf(0);
// 	return 0;
// }