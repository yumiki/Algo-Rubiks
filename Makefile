CC	=	gcc

RM	=	rm -f

CFLAGS	=	-W -Wall -Werror

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	Algo-Rubiks

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean	:
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
