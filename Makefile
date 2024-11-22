NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRCS =  ft_printf.c\
        ft_printchar_and_str.c\
        ft_print_number_ptr.c\

BONUS_SRC = .bonus/ft_printf_bonus.c\
			.bonus/ft_printchar_and_str_bonus.c\
			.bonus/ft_print_number_ptr_bonus.c\
			.bonus/ft_putplus_space_and_shap_bonus.c\

OBJS = $(SRCS:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

ifdef WITH_BONUS
	OBJ_SWITCH = $(BONUS_OBJS)
else
	OBJ_SWITCH = $(OBJS)
endif

$(NAME): $(OBJ_SWITCH)
	ar rcs $@ $^

all : bonus $(NAME)

clean:
	@rm -rf $(OBJS) $(BONUS_OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

bonus:
		$(MAKE) WITH_BONUS=1 $(NAME)

.PHONY: all,clean,fclean,re