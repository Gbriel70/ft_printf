#include "ft_printf.h"

static int check_value(const char *input, void *arg)
{
	int	i;

	i = 0;
	if (*input == 'c')
		i += ft_printchar((int)arg);
	return i;
}

int	ft_printf(char *input, ...)
{
	va_list args;
	int i;
	va_start(args, input);
	while (*input)
	{
		i = 0;
		if (*input == '%')
		{
			input++;
			if (ft_strchr("cspdiuxX", *input))
				check_value(input, va_arg(args, void *));
			if (*input == '%')
				i += ft_printchar('%');
		}
		i += ft_printchar(*input);
		input++;
	}
	va_end(args);
	return i;
}

int main()
{
	ft_printf("teste: %c", 'a');
	printf("\n");
	printf("teste: %c", 'a');
	return 0;
}