# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mabouche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/02 10:44:47 by mabouche          #+#    #+#              #
#    Updated: 2018/05/02 11:24:49 by mabouche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Werror -Wall -Wextra
SRC_NAME =	ft_isdigit.c \
			ft_memalloc.c \
			ft_putendl_fd.c \
			ft_strcmp.c \
			ft_strmapi.c \
			ft_strtrim.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_putnbr.c	\
			ft_strcpy.c	\
			ft_strncat.c \
			ft_tolower.c \
			ft_isspace.c \
			ft_memchr.c	\
			ft_putnbr_fd.c \
			ft_strdel.c	\
			ft_strncmp.c \
			ft_toupper.c \
			ft_isupper.c \
			ft_memcmp.c	\
			ft_putstr.c	\
			ft_strdup.c	\
			ft_strncpy.c \
			ft_itoa.c \
			ft_memcpy.c \
			ft_putstr_fd.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_atoi.c \
			ft_lstadd.c \
			ft_memdel.c \
			ft_str_is_alpha.c \
			ft_striter.c \
			ft_strnew.c \
			ft_bzero.c \
			ft_lstdel.c \
			ft_memmove.c \
			ft_str_is_numeric.c \
			ft_striteri.c \
			ft_strnstr.c \
			ft_isalnum.c \
			ft_lstdelone.c \
			ft_memset.c \
			ft_str_is_space.c \
			ft_strjoin.c \
			ft_strrchr.c \
			ft_isalpha.c \
			ft_lstiter.c \
			ft_putchar.c \
			ft_strcat.c \
			ft_strlcat.c \
			ft_strsplit.c \
			ft_isascii.c \
			ft_lstmap.c \
			ft_putchar_fd.c	\
			ft_strchr.c	\
			ft_strlen.c	\
			ft_strstr.c \
			ft_isblank.c \
			ft_lstnew.c \
			ft_putendl.c \
			ft_strclr.c	\
			ft_strmap.c	\
			ft_strsub.c

OBJECTS = $(SRC_NAME:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS)/%.o: $(SRC_NAME)
	gcc -c $(SRC_NAME)

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

