NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS =    ft_printf.c\
        ft_printchar.c\
        ft_printstr.c\
        ft_print_pointer.c\
        ft_print_number.c\
        ft_print_hex.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

%.o: %.c
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all,clean,fclean,re