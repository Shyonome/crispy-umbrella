##
## EPITECH PROJECT, 2020
## B-PSU-100-NCE-1-1-myprintf-isaak.nicolas
## File description:
## Makefile
##

NAME	=	libmy_printf.a

SRC	=	$(wildcard *.c)

CFLAGS	=

OBJ     =    $(SRC:.c=.o)

all     :    $(NAME)

$(NAME) :    $(OBJ)
		ar crs $(NAME) $(OBJ) $(CFLAGS)

clean    :
		rm -f $(OBJ)

fclean  :    clean
		rm -f $(NAME)

re      :    fclean all