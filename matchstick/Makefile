##
## EPITECH PROJECT, 2021
## B-CPE-200-NCE-2-1-bsmatchstick-isaak.nicolas
## File description:
## Makefile
##

NAME    =   matchstick

SRC    =	$(wildcard src/*.c)

OBJ     =    $(SRC:.c=.o)

CFLAGS	= -Wall -Wextra

.PHONY:	all
all     :    $(NAME)

$(NAME) :    $(OBJ)
		make -C lib/phoenix/
		make -C lib/my_printf/
		gcc $(SRC) -Iincludes -Llib/phoenix -lphoenix -Llib/my_printf -lmy_printf -o $(NAME) -g3

.PHONY:	clean
clean    :
		make clean -C lib/phoenix/
		make clean -C lib/my_printf/
		rm -f $(OBJ)

.PHONY:	fclean
fclean  :    clean
		make fclean -C lib/phoenix/
		make fclean -C lib/my_printf/
		rm -f $(NAME)

.PHONY:	re
re      :    fclean all