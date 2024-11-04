#include "../ft_printf.h"

int ft_strlen(char *str)
{
	char *s = str;
	while(*s)
		s++;
	return s - str;
}
