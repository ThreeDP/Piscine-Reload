NAME = program
SRCS = 	main.o \
	 	ft_range.o 
HEADER = my.h
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	@gcc $(SRCS) -o $@

main.o: $(addprefix ../test/ex21/, main.c $(HEADER))
	@gcc -o $@ -c $<

ft_range.o:
	@gcc -o $@ -c ft_range.c

clean:
	@rm -f $(SRCS)

fclean: clean
	@rm -f $(NAME)

.PHONY: all clean fclean

start:
	@echo Testando Norminette
	@norminette
	./$(NAME)