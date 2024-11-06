NAME = libft_plus_printf.a
LIBFTNAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ./libft/

SRCS =	ft_printf.c\
		ft_printchar.c\

OBJS = $(SRCS:.c=.o)

all : $(NAME)

makelibft:
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJS)
	@cd $(LIBFT_DIR) && make clean

fclean: clean
	rm -f $(NAME) $(EXEC)
	@cd $(LIBFT_DIR) && make fclean

re: fclean all
