#####################################################################
#																	#
#		INGREDIENTS													#
#																	#
#####################################################################

NAME 	:= libftprintf.a
CC 		:= cc
FLAGS 	:= -Wall -Werror -Wextra
IFLAG	:= -I ./include
DIR_SRC	:= src
DIR_OBJ := .obj

SRC 	:=	ft_printf.c \
			ft_printf_str.c \
			ft_putnbr.c \
		 	ft_putnbr_hexa.c \
			ft_putptr.c \

SRC		:=	$(addprefix $(DIR_SRC)/, $(SRC))

OBJ		:=	$(addprefix $(DIR_OBJ)/, $(SRC:%.c=%.o))

RM		:=	rm -rf

AR		:=	ar -rc

define data

  █████▒▄▄▄█████▓ ██▓███   ██▀███   ██▓ ███▄    █ ▄▄▄█████▓  █████▒
▓██   ▒ ▓  ██▒ ▓▒▓██░  ██▒▓██ ▒ ██▒▓██▒ ██ ▀█   █ ▓  ██▒ ▓▒▓██   ▒ 
▒████ ░ ▒ ▓██░ ▒░▓██░ ██▓▒▓██ ░▄█ ▒▒██▒▓██  ▀█ ██▒▒ ▓██░ ▒░▒████ ░ 
░▓█▒  ░ ░ ▓██▓ ░ ▒██▄█▓▒ ▒▒██▀▀█▄  ░██░▓██▒  ▐▌██▒░ ▓██▓ ░ ░▓█▒  ░ 
░▒█░      ▒██▒ ░ ▒██▒ ░  ░░██▓ ▒██▒░██░▒██░   ▓██░  ▒██▒ ░ ░▒█░    
 ▒ ░      ▒ ░░   ▒▓▒░ ░  ░░ ▒▓ ░▒▓░░▓  ░ ▒░   ▒ ▒   ▒ ░░    ▒ ░    
 ░          ░    ░▒ ░       ░▒ ░ ▒░ ▒ ░░ ░░   ░ ▒░    ░     ░      
 ░ ░      ░      ░░         ░░   ░  ▒ ░   ░   ░ ░   ░       ░ ░    
                             ░      ░           ░                  
                                                                   
endef
export data

#####################################################################
#																	#
#		COLORS														#
#																	#
#####################################################################

RED		:=\033[0;31m
GREEN	:=\033[0;32m
NC		:=\033[0m
PURPLE 	:=\033[0;36m

#####################################################################
#																	#
#			RULES													#
#																	#
#####################################################################

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "${PURPLE}$$data${NC}"
	@echo "${GREEN} compiling the program${NC}"

$(DIR_OBJ)/%.o: %.c
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(IFLAG) -c $< -o $@ 


clean:
	@rm -rf .obj
	@$(RM) $(OBJ)
	@echo "${RED} .obj folder remove${NC}\n"

fclean:clean
	@$(RM) $(NAME)
	@echo "${RED}$(NAME) remove${NC}\n"

re: fclean all

.PHONY : all clean fclean re
