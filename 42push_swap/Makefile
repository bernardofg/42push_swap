NAME = push_swap

CC = gcc
RM = rm -f

INCLUDES = -I includes -I libft

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS_DIR = srcs
SRCS = $(SRCS_DIR)/algorithm.c \
	$(SRCS_DIR)/errors.c \
	$(SRCS_DIR)/main.c \
	$(SRCS_DIR)/operations.c \
	$(SRCS_DIR)/utils.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror $(INCLUDES)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBFT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

