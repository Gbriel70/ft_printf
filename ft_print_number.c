#include "ft_printf.h"

int ft_print_number(long nbr)
{
	int c;

	c = 0;
	if (nbr >= 10)
		c += ft_putnbr(nbr / 10);
	c += ft_printchar((nbr % 10) + '0');
	return c;
}

int ft_putnbr(long nbr)
{
	int  c;

	c = 0;
	if (nbr < 0)
	{
		c += write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= 10)
		c += ft_putnbr(nbr / 10);
	c += ft_printchar((nbr % 10) + '0');
	return c;
}