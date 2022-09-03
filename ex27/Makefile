NAME = ft_display_file
SRCS = 	ft_display_file.c \
		ft_putchar.c \
		ft_putstr.c
FLAGS = -Wall -Werror -Wextra
HEADER = my.h

all: $(NAME) 

$(NAME): $(SRCS:.c=.o)
	gcc -o $(NAME) $(FLAGS) $(SRCS:.c=.o)

# O arquivo da chamada atual com final .o gera um .c
%.o: %.c
# O menos c (-c) é usando somente pra criar os Obj .o
	gcc -o $@ -c $< $(FLAGS)

norm:
	norminette

clean:
	rm -f $(SRCS:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
