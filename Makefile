# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtan <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/21 17:49:03 by mtan              #+#    #+#              #
#    Updated: 2018/02/21 17:49:04 by mtan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
FILES = ft_isalpha.c \
		ft_memccpy.c \
		ft_memset.c \
		ft_putnbr_fd.c \
		ft_strcmp.c \
		ft_striter.c \
		ft_strmapi.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_strcpy.c \
		ft_striteri.c \
		ft_strncat.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_strdel.c \
		ft_strjoin.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_atoi.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_putendl.c \
		ft_strcat.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strncpy.c \
		ft_strsplit.c \
		ft_bzero.c \
		ft_itoa.c \
		ft_memdel.c \
		ft_putendl_fd.c \
		ft_strchr.c \
		ft_strequ.c \
		ft_strlen.c \
		ft_strnequ.c \
		ft_strstr.c \
		ft_isalnum.c \
		ft_memalloc.c \
		ft_memmove.c \
		ft_putnbr.c \
		ft_strclr.c \
		ft_strmap.c \
		ft_strnew.c \
		ft_strsub.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
ft_islower.c ft_isupper.c ft_iswspace.c ft_nbrlen.c ft_wordcount.c ft_wordlen.c

OBJECTS = $(FILES:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
