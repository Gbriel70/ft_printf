#include "ft_printf.h"

int ft_print_pointer(unsigned long ptr)
{
	int i;

	i = 0;
	if (ptr == 0)
		return (write(1, "(nil)", 5));
	i += write(1, "0x", 2);
	i += ft_print_hex(ptr);
	return (i);
}