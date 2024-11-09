#include "ft_printf.h"

static int check_value(char input, va_list args)
{
	int	i;

	i = 0;
	if (input == 'c')
		i += ft_printchar(va_arg(args, int));
	else if (input == 's')
		i += ft_printstr(va_arg(args, char *));
	else if (input == 'p')
		i+= ft_print_pointer(va_arg(args, unsigned long));
	else if (input == 'd' || input == 'i')
		i += ft_putnbr(va_arg(args, long));
	else if (input == 'u')
		i += ft_print_number(va_arg(args, unsigned int));
	else if (input == 'x')
		i += ft_print_hex(va_arg(args, unsigned int));
	else if (input == 'X')
		i += ft_print_UPER_hex(va_arg(args, unsigned int));
	else if (input == '%')
		i += ft_printchar('%');
	return i;
}

int	ft_printf(const char *input, ...)
{
	va_list args;
	int print_l;

	print_l = 0;
	va_start(args, input);
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			print_l += check_value(*input, args);
		}else{
			print_l += ft_printchar(*input);
		}
		input++;
	}
	va_end(args);
	return (print_l);
}

/*int main()
{
	int a;
	char *ptr = (char *)&a;
	ft_printf("teste: %s ,%c, %p, %d, %i, %u, %x, %x", "-", 'c', ptr, -42, -22, -1, 1, 'a');
	printf("\n");
	printf("teste: %s ,%c, %p, %d, %i, %u, %x, %x", "-", 'c', ptr, -42, -22, -1, 1, 'a');
	return 0;
}*/