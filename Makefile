# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 15:41:11 by mzhu              #+#    #+#              #
#    Updated: 2019/05/01 04:56:38 by mzhu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	libft.a

FLAGS					=	-Werror -Wextra -Wall

INCLUDE					=	libft.h	

SRC						=	ft_memset.c \
							ft_bzero.c \
							ft_atoi.c \
							ft_isalpha.c \
							ft_isdigit.c \
							ft_isalnum.c \
							ft_isascii.c\
							ft_isprint.c\
							ft_toupper.c \
							ft_tolower.c \
							ft_putchar.c \
							ft_putstr.c \
							ft_putendl.c \
							ft_putnbr.c \
							ft_memcpy.c \
							ft_memalloc.c \
							ft_strcmp.c \
							ft_strlen.c \
							ft_strdup.c \
							ft_strcpy.c \
							ft_strncpy.c \
							ft_strcat.c \
							ft_strncat.c \
							ft_strlcat.c \
							ft_strchr.c \
							ft_strrchr.c \
							ft_strstr.c \
							ft_strnstr.c \
							ft_memcmp.c \
							ft_strncmp.c \
							ft_putchar_fd.c \
							ft_putstr_fd.c \
							ft_putendl_fd.c \
							ft_putnbr_fd.c \
							ft_memmove.c \
							ft_memccpy.c \
							ft_memchr.c \
							ft_memdel.c \
							ft_strnew.c \
							ft_strdel.c \
							ft_strclr.c \
							ft_striter.c \
							ft_striteri.c \
							ft_strequ.c \
							ft_strnequ.c \
							ft_strmap.c \
							ft_strmapi.c \
							ft_strsub.c \
							ft_strjoin.c \
							ft_strtrim.c \
							ft_count_int.c \
							ft_itoa.c \
							ft_strsplit.c \
							ft_strcdup.c \
							ft_swap.c 

OBJECT					=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	ar rc $(NAME) $(OBJECT)

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
