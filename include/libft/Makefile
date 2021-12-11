# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epacheco <epacheco@student.42sp.org.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/11 13:37:45 by epacheco          #+#    #+#              #
#    Updated: 2021/09/17 12:03:52 by epacheco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= clang
CFLAGS	:= -Wall -Wextra -Werror -c
RM		:= rm -f
HEADERS := -I ../
AR		:= ar rcs

SRC_FILES =  ft_atoi.c	ft_bzero.c		ft_calloc.c		ft_isalpha.c	\
		ft_isalnum.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c	\
		ft_strchr.c		ft_strdup.c		ft_strlcat.c	ft_strlcpy.c	\
		ft_strlen.c		ft_strrchr.c	ft_strncmp.c	ft_strnstr.c	\
		ft_memchr.c		ft_memcpy.c		ft_memset.c		ft_memmove.c	\
		ft_memcmp.c		ft_tolower.c	ft_toupper.c	ft_substr.c		\
		ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c		\
		ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putendl_fd.c	\
		ft_putnbr_fd.c	ft_putstr_fd.c	ft_strcmp.c
SRC_OBJ = $(SRC_FILES:%.c=%.o)

$(NAME): $(SRC_OBJ)
	$(AR) $(NAME) $(SRC_OBJ)

.c.o:
	$(CC) $(CFLAGS) $< -o ${<:.c=.o} ${HEADERS}

all: $(NAME)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
