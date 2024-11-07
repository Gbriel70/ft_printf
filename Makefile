NAME = ft_printf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c\
		ft_printchar.c\
		ft_printstr.c\
		ft_print_pointer.c\
		ft_print_number.c\
		ft_print_hex.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	@ar -r $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME) $(EXEC)

re: fclean all
