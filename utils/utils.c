#include "../ft_printf.h"

void init_objs(t_objs objcts)
{
	objcts.minus = 0;
	objcts.max = 0;
}

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

int ft_putnbr(long nbr)
{
	char c;
	if(!nbr)
		return 1;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
	return 1;
}

int is_in_str(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return 0;
}