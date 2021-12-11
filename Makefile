NAME 		:= libftprintf.a
CC		:= clang
CFLAGS		:= -Wall -Wextra -Werror -c
RM		:= rm -f
AR		:= ar rcs

HEADERS_PATH 	:= -I ./include
LIBFT		:= ./include/libft/libft.a

SRC_FILES = 	./src/ft_num_len.c \
		./src/ft_print_char.c \
		./src/ft_print_hexa.c \
		./src/ft_print_integer.c \
		./src/ft_print_p_symbol.c \
		./src/ft_print_pointer.c \
		./src/ft_print_string.c \
		./src/ft_print_unsigned_int.c \
		./src/ft_printf.c \
		./src/ft_putnbr_hexa.c \
		./src/ft_putnbr_unsigned.c

SRC_OBJ = ${SRC_FILES:%.c=%.o}

all: ${NAME}

${NAME}: ${SRC_OBJ} ${LIBFT}
	$(AR) ${NAME} ${SRC_OBJ}

${LIBFT}:
	make -C ./include/libft
	cp ${LIBFT} ${NAME}

.c.o:
	$(CC) $(CFLAGS) $< -o $(<:.c=.o) $(HEADERS_PATH)

clean:
	make clean -C ./include/libft
	$(RM) $(SRC_OBJ)

fclean: clean
	make fclean -C ./include/libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clear fclean re bonus rebonus
