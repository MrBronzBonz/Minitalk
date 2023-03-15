# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 09:27:58 by ebronzin          #+#    #+#              #
#    Updated: 2023/03/15 09:31:08 by ebronzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
HEADER	= ${NAME:.a=.h}
SRCS	= ft_atoi.c ft_isalnum.c ft_isdigit.c ft_memcmp.c  ft_memset.c  ft_strlcat.c ft_strncmp.c ft_bzero.c   ft_isalpha.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_calloc.c  ft_isascii.c ft_memchr.c ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c ft_toupper.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_printf.c ft_printf_chr_str_ptr.c ft_printf_esadec.c ft_printf_numbrs.c ft_printf_numbrs2.c
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Werror -Wextra
OPTIONS	= -c
CC		= gcc ${FLAGS}
RM		= rm -f

.o:.c
	${CC} ${OBJS} $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
