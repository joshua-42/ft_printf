#####################################################################
#																	#
#		INGREDIENTS													#
#																	#
#####################################################################

SRC 	:=	ft_printf.c \
			ft_printf_str.c \
			ft_putnbr.c \
		 	ft_putnbr_hexa.c \
			ft_putptr.c \

OBJ		:= $(SRC:.c=.o)

NAME 	:= libftprintf.a
CC 		:= cc
CFLAGS 	:= -Wall -Werror -Wextra

RED		:=\033[0;31m

GREEN	:=\033[0;32m

#####################################################################
#																	#
#			RULES													#
#																	#
#####################################################################

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "${GREEN} compiling the program"
	@ar -rc $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@echo "${RED} clean all the .o"
	@rm -f $(OBJ)

fclean :
	@echo "${RED} clean all the .o and the .a"
	@rm -f $(NAME)
	@rm -f $(OBJ)

re : fclean all

.PHONY : all clean fclean re
