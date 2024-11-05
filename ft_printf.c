
#include "ft_printf.h"

int	ft_printf(const char *, ...);
int process(const char *str, va_list *params, int *i);
int normal_process(const char *str, va_list *params, t_objs obj);

int normal_process(const char *str, va_list *params, t_objs obj)
{
	int resp;

	resp = 0;
	if (str[1] == 'c')
	{
		resp += ft_printchar(va_arg(*params, int));
	}

	return (resp);
}

int process(const char *str, va_list *params, int *i)
{
	int resp;
	t_objs obj;
	
	init_objs(obj);
	resp += normal_process(str + (* i), params, obj);
	return (resp);
}

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
		{
			resp += process(str, &params, &i);
			i++;
		}
		else
		{
			resp += ft_printchar(str[i]);
		}
		i++;
	}
	va_end(params);
	return resp;
}

int main()
{
	ft_printf("teste: %c", "foi");
	return 0;
}