NAME = libft.a
DIR = srcs/
INCLUDES = includes/
SOURCES = 	ft_putchar.c \
			ft_putstr.c \
			ft_strcmp.c \
			ft_strlen.c \
			ft_swap.c			
$(DIR)_SOURCES := $(addprefix $(DIR), $(SOURCES))
$(INCLUDES)_SOURCES := $(addprefix $(INCLUDES), $(SOURCES:.c=.h))
FLAGS = -Wall -Werror -Wextra

all: $(NAME)

# Transforma os arquivos .c do diretorio SRCS para .o
$(NAME): $($(DIR)_SOURCES:.c=.o)
	ar -rc $(NAME) $($(DIR)_SOURCES:.c=.o)

$($(DIR)_SOURCES:.c=.o): 
	gcc -o $@ -c $(addprefix $(DIR), $(@F:.o=.c)) $(FLAGS)

clean:
	rm -f $($(DIR)_SOURCES:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean