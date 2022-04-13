NAME = push_swap

HEADER = push_swap.h

SRCS = $(wildcard main/*.c)\
		$(wildcard 3argc/*.c)\
		$(wildcard check_errors/*.c)\
		$(wildcard create_list/*.c)\
		$(wildcard moves_push/*.c)\
		$(wildcard moves_rerotate/*.c)\
		$(wildcard moves_rotate/*.c)\
		$(wildcard moves_swap/*.c)\
		$(wildcard probably_delete/*.c)\
		$(wildcard sort/*.c)\
		$(wildcard utils/*.c)

OBJS = $(SRCS:.c=.o)

CC		:=	gcc
CFLAGS	:= -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	mv $(OBJS) Objs

san: fclean $(OBJS)
	$(CCS) $(OBJS) -g -o $(NAME)
	mv $(OBJS) Objs

clean:
	rm -f Objs/*.o


