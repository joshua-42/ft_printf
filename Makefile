#####################################################################
#																	#
#		FILES														#
#																	#
#####################################################################

SRC_DIR := src
SRC :=	ft_printf.c \
		ft_printf_str.c \
		ft_putnbr.c \
	  	ft_putnbr_hexa.c \
		ft_putptr.c \
SRC := $(SRC:%$(SRC_DIR)/%)

OBJ_DIR	:= .obj
OBJS	:= $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)

NAME := libftprintf.a
CC := cc
CFLAGS := -Wall -Werror -Wextra

#####################################################################
#																	#
#			RULES													#
#																	#
#####################################################################

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
    $(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)

clean :
	@rm -f $(OBJ)
fclean : clean
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean flclean re
