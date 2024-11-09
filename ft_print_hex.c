#include "ft_printf.h"

int ft_print_hex(unsigned long nbr)
{
	int	i;
	char *hex;

	i = 0;
	hex = "0123456789abcdef";
	if (nbr >= 16)
		i += ft_print_hex(nbr / 16);
	i += write(1, &hex[nbr % 16], 1);
	return i;
}


int ft_print_UPER_hex(unsigned int nbr)
{
	int	i;
	char *hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nbr >= 16)
		i += ft_print_UPER_hex(nbr / 16);
	i += write(1, &hex[nbr % 16], 1);
	return i;
}