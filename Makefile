CC = gcc
CFLAGS = -g -Wextra -Wall -Werror
AR = ar rcs

NAME = push_swap.a

SRCS = \
		push_swap.c\
		list.c\
		command.c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(OBJS)
	make bonus -C libft/
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

fclean: clean
	rm -rf $(NAME)
	make fclean -C libft/

clean:
	rm -rf $(OBJS)
	make clean -C libft/

re: fclean all

.PHONY : all clean fclean re