
#include "ft_printf.h"

int	ft_printf(const char *, ...);

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		i;
	int		resp;

	i = 0;
	resp = 0;
	va_start(params, str);
	while (str[i])
	{
		if (str[i] == '%')
			resp += process(str, &params, &i);
		i++;
	}
}