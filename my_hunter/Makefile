##
## EPITECH PROJECT, 2020
## B-CPE-110-NCE-1-1-bsbsq-isaak.nicolas
## File description:
## Makefile
##

NAME    =    my_hunter

CFLAGS +=	-I./include/

SRC    =	$(wildcard src/*.c)

OBJ     =    $(SRC:.c=.o)

all     :    $(NAME)
		rm -f $(OBJ)

$(NAME) :    $(OBJ)
		gcc -o $(NAME) $(OBJ) -l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window -lm 

clean    :
		rm -f $(OBJ)

fclean  :    clean
		rm -f $(NAME)

re      :    fclean all clean