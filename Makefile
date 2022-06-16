NAME = libftprintf.a
# CC = gcc
AR = ar rc
SRC = ft_printf.c ft_putnbrs.c ft_length.c
OBJECT_FILES = $(SRC:%.c=%.o)
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -Ilibft

all: $(NAME)

$(NAME): $(OBJECT_FILES)
	$(MAKE) -C libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJECT_FILES) 

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLUDE) -o $@ $<

clean: 
	@rm -f $(OBJECT_FILES)
	$(MAKE) clean -C libft
	
fclean: clean
	@rm -f $(NAME)
	$(MAKE) fclean -C libft

re: fclean all

.PHONY: all clean fclean 