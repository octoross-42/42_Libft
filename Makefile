NAME = libft.a

SRCS = 
SRCS_BONUS = 

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror

%.o : %.c
	cc ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

all : ${NAME}

bonus : $(OBJS_BONUS)
		ar rc $(NAME) $(OBJS_BONUS)
		ranlib $(NAME)

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all