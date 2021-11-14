CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
all: libft.a
libft.a: *.o
	ar -rc $(NAME) *.o
%.o : %.c
	$(CC) $(CFLAGS) -c $^
clean:
	rm *.o
fclean: 
	rm libft.a *.o
re: 
	make fclean;make all
