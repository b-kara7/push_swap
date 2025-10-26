NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c utils.c push_swap.c push.c rotate.c swap.c reverse_rotate.c \
       first_push_b.c ft_split.c ft_free_split.c ft_atoi_ps.c position.c \
       error.c duplicates.c is_sorted.c big_chunk.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re