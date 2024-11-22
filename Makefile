NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c\
        ft_printchar_and_str.c\
        ft_print_number_ptr.c\

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