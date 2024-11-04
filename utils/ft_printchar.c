#include "../ft_printf.h"

int	ft_printchar(char c, t_objs obj);

int	ft_printchar(char c, t_objs obj)
{
	return (write(1, &c, 1));
}