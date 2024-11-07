#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int ft_printchar(const char c);
int ft_printstr(const char *str);
int ft_print_hex(unsigned int nbr);
int ft_print_UPER_hex(unsigned int nbr);
int ft_print_pointer(unsigned long long ptr);
int ft_print_number(long nbr);
int ft_putnbr(long nb);

#endif