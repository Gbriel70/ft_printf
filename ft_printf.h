#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <limits.h>
# include <unistd.h>
# include <stdarg.h>

typedef	struct t_objects
{

}	t_objs;

int	ft_printf(const char *, ...);

int	ft_printchar(char c, t_objs obj);
int	ft_print_str(char *str, t_objs obj);
int ft_printnum(long c, t_objs obj);
int ft_print_base_number(int c, t_objs obj);
int ft_print_pointer(void *p, t_objs obj);
int ft_print_U_number(unsigned long c, t_objs obj);

int ft_strlen(char *str);

# endif