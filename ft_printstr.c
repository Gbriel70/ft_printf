#include "ft_printf.h"

int ft_printstr(const char *str)
{
	const char *s;
	int i;
	int len;

	if (!str)
		return (ft_printstr("(null)"));
	s = str;
	i = 0;
	while(*s)
		s++;
	len  = s - str;

	i += write(1, str, len);
	return i;
}
