# Variáveis
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS =  ft_printf.c\
		ft_printchar_and_str.c\
		ft_print_number_ptr.c

SRC_HEADER = ft_printf.h\

BONUS_DIR = bonus_src/
BONUS_SRCS = ft_printf_bonus.c\
			 ft_printchar_and_str_bonus.c\
			 ft_print_number_ptr_bonus.c\
			 ft_putplus_space_and_sharp_bonus.c

BONUS_HEADER = $(BONUS_DIR)ft_printf_bonus.h

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(addprefix $(BONUS_DIR), $(BONUS_SRCS:.c=.o))

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

# Regras de dependências
$(OBJS): $(SRC_HEADER)
$(BONUS_OBJS): $(BONUS_HEADER)

# Regras auxiliares
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(BONUS_DIR)%.o: $(BONUS_DIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all