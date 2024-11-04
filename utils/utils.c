#include "../ft_printf.h"

int ft_strlen(char *str)
{
	char *s = str;
	while(*s)
		s++;
	return (s - str);
}

int ft_atoi(char *str)
{
	int i;
	int resp;
	while (str[i] >= 0 || str[i] <= 9)
	{
		resp = resp * 10 + (str[i] - '0');
		i++;
	}
	return (resp);
}