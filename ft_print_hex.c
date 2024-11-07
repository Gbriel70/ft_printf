#include "ft_printf.h"

int ft_print_hex(unsigned int nbr)
{
	int	i;
	char *hex;

	i = 0;
	hex = "123456789abcdef";
	if (nbr >= 16)
		i += ft_print_hex(nbr / 16);
	i += write(1, &hex[nbr % 16], 1);
	return i;
}