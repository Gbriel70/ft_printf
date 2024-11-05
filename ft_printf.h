#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

typedef	struct t_objects
{
	int minus;
	int max;
}	t_objs;

int	ft_printf(const char *, ...);
int process(const char *str, va_list *params, int *i);

int	ft_printchar(char c);
int	ft_print_str(char *str, t_objs obj);
int ft_printnum(long c, t_objs obj);
int ft_print_base_number(int c, t_objs obj);
int ft_print_pointer(void *p, t_objs obj);
int ft_print_U_number(unsigned long c, t_objs obj);

int ft_strlen(char *str);
int ft_atoi(char *str);
int ft_putnbr(long nbr);
int is_in_str(char c, char *str);
void init_objs(t_objs objcts);

# endif