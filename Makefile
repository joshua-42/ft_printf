SRC :=	ft_printf.c \
		ft_printf_str.c \
		ft_putnbr.c \
	  	ft_putnbr_hexa.c \
		ft_putptr.c \

OBJ := $(SRC:.c=.o)

CC := cc

CFLAGS := -Wall -Werror -Wextra

NAME := libftprintf.a

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@rm -f $(OBJ)
fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean flclean re
