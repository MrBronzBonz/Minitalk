# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 09:12:01 by ebronzin          #+#    #+#              #
#    Updated: 2023/03/15 11:34:14 by ebronzin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = ./libft/libft.a
RM = rm -rf

SERVER = server
CLIENT = client

SV_SRCS = server.c
SV_OBJS = $(SV_SRCS:.c=.o)

CLIENT_SRCS = client.c
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft
$(SERVER): $(SV_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(SV_OBJS) $(LIBFT) -o server
$(CLIENT): $(CLIENT_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(CLIENT_OBJS) $(LIBFT) -o client
	
clean:
	$(MAKE) clean -C ./libft
	$(RM) $(SV_OBJS) $(CLIENT_OBJS) 
fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(SERVER) $(CLIENT)
re: fclean all
