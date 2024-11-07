#include "ft_printf.h"

int ft_printstr(const char *str)
{
	const char *s;
	int len;

	s = str;
	while(*s)
		s++;
	len  = (s - str);

	write(1, str, len);
	return 1;
}
