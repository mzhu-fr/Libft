# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzhu <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/22 15:41:11 by mzhu              #+#    #+#              #
#    Updated: 2019/11/08 02:13:25 by mzhu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					=	libft.a

FLAGS					=	-Werror -Wextra -Wall

INCLUDE					=	libft.h	

SRC						=	$(shell find . -type f | grep "\.c$$") 

OBJECT					=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECT)
	@-ar rc $(NAME) $(OBJECT)
	@echo COMPILATION DONE

%.o: %.c
	@-gcc $(FLAGS) -o $@ -c $<

clean:
	@-rm -f $(OBJECT)
	@echo Files deleted

fclean : clean
	@-rm -f $(NAME)
	@echo File cleaned

re : fclean all

.PHONY : all clean fclean re
