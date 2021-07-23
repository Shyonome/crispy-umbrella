##
## EPITECH PROJECT, 2020
## B-BOO-101-NCE-1-1-phoenixd03-isaak.nicolas
## File description:
## Makefile
##

NAME    =   libphoenix.a

SRC    =	$(wildcard *c)

OBJ     =    $(SRC:.c=.o)

.PHONY:	all
all     :    $(NAME)

$(NAME) :    $(OBJ)
		ar rc $(NAME) $(OBJ)

.PHONY:	clean
clean    :
		rm -f $(OBJ)

.PHONY:	fclean
fclean  :    clean
		rm -f $(NAME)
		rm -f ./a.out

.PHONY:	re
re      :    fclean all clean
