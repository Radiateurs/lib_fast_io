#------------------------------------------------------
# Makefile to compile the fast_io libraries
#
# Created by Pierre-Marie Danieau the 06-04-2017
#------------------------------------------------------

CC =		gcc

AR =		ar rc

RM =		rm -f

LIB =		libfast_io.a

SRC =		src/fd_print.c		\
		src/print.c		\
		src/error.c

OBJ =		$(SRC:.c=.o)

INC =		-I./include/

CFLAGS +=	$(INC)

all:		$(LIB)

$(LIB):		$(OBJ)
		$(AR) $(LIB) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(LIB)

re:		fclean all

.PHONY:		all $(LIB) clean fclean re
