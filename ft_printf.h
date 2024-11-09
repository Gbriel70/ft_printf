#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int	ft_printf(const char *input, ...);

int ft_printchar(char c);
int ft_printstr(const char *str);
int ft_print_hex(unsigned long nbr);
int ft_print_UPER_hex(unsigned int nbr);
int ft_print_pointer(unsigned long ptr);
int ft_print_number(unsigned int nbr);
int ft_putnbr(int nbr);

#endif