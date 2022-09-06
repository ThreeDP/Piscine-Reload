NAME = program
SRCS = 	main.o \
	 	ft_strdup.o \
		ft_strcmp.o
HEADER = my.h
FLAGS = -Wall -Werror -Wextra

all: run $(NAME) start clean

run: $(SRCS)

$(NAME):
	gcc $(SRCS) -o $@

main.o: $(addprefix ../test/ex20/, main.c $(HEADER))
	gcc -o $@ -c $<

ft_strdup.o:
	gcc -o $@ -c ft_strdup.c

ft_strcmp.o:
	gcc -o $@  -c $(addprefix ../ex17/, ft_strcmp.c)

clean:
	rm -f $(SRCS)

fclean: clean
	@rm -f $(NAME)

.PHONY: all clean fclean

start:
	@echo Testando Norminette
	norminette
	./$(NAME)