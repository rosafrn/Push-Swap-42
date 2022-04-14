CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f

NAME	=	push_swap

HEADER	=	push_swap.h

SRCS = main.c\
		3argc.c\
		check_errors.c\
		create_list.c\
		moves_push.c\
		moves_rerotate.c\
		moves_rotate.c\
		moves_swap.c\
		sort.c\
		utils.c

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

push_swap: 
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	 	$(RM) $(NAME)

re: fclean all



