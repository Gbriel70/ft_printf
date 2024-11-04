#include "../ft_printf.h"

int	*ft_print_str(char *str);

int	*ft_print_str(char *str)
{
	if(!str)
		return 0;
	write(1, str, sizeof(str));
}
