/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcosta-m <gcosta-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 10:50:32 by gcosta-m          #+#    #+#             */
/*   Updated: 2024/11/22 10:14:29 by gcosta-m         ###   ########.fr       */
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
		i += ft_print_pointer(va_arg(args, unsigned long));
	else if (input == 'd' || input == 'i')
		i += ft_putnbr(va_arg(args, long), DECIMAL_BASE);
	else if (input == 'u')
		i += ft_print_number(va_arg(args, unsigned int));
	else if (input == 'x')
		i += ft_putnbr(va_arg(args, unsigned int), HEXADECIMAL_BASE);
	else if (input == 'X')
		i += ft_print_uper_hex(va_arg(args, unsigned int));
	else if (input == '%')
		i += ft_printchar('%');
	return (i);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		print_l;

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

int main()
{
	//int a;
	//char *ptr = (char *)&a;
	ft_printf("teste: %d, %i, %x", -42, -22, 10);
	printf("\n");
	printf("teste: %d, %i, %x", -42, -22, 10);
	return 0;
}