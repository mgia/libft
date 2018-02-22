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

 CC		= gcc
 CFLAGS = -Wall -Wextra -Werror

 NAME = libft.a
 HEAD = libft.h
 SRCS =	ft_putchar_fd.c \
ft_putchar.c ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
ft_putstr_fd.c ft_putstr.c ft_strclr.c \
ft_strdel.c ft_strequ.c ft_striter.c ft_striteri.c \
ft_strjoin.c  ft_strlen.c ft_strmap.c ft_strmapi.c \
ft_strnequ.c ft_strnew.c \
ft_strsplit.c  ft_strsub.c ft_nbrlen.c ft_wordcount.c \
ft_wordlen.c ft_memalloc.c ft_memdel.c ft_itoa.c ft_bzero.c ft_strtrim.c \
ft_memcpy.c ft_memset.c ft_memmove.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
ft_strdup.c ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strlcat.c \
ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c \
ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_isdigit.c \
ft_toupper.c ft_tolower.c ft_islower.c ft_isupper.c ft_iswspace.c ft_atoi.c

 OBJS = $(SRCS:.c=.o)

 .PHONY: all, clean, fclean, re

 all: $(NAME)

 $(NAME):
	@$(CC) $(CFLAGS) -c $(SRCS)
	# gcc -shared -o libft.so $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "[INFO] $(NAME) created successfully."

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed."

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] Library removed."

re: fclean all
	@echo "[INFO] Library updated."
