# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrenzett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 02:28:23 by lrenzett          #+#    #+#              #
#    Updated: 2023/09/23 00:47:35 by lrenzett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= minitalk
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I./includes/ -I./libft/includes/
SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
LIBFT_DIR	= ./libft/
LIBFT_NAME	= libft.a
SRC_FILES	= server.c client.c
OBJ_FILES	= $(SRC_FILES:.c=.o)
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))   
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))
LIBFT		= $(addprefix $(LIBFT_DIR), $(LIBFT_NAME))
LIBRARIES	= -L./libft -lft

all: $(NAME)

$(NAME):  $(LIBFT) server client 
	@echo "111"

$(LIBFT):
	(cd $(LIBFT_DIR) && make)
	@echo "222"

server: $(OBJ_DIR)server.o $(LIBFT)
	gcc $(CFLAGS) $(OBJ_DIR)server.o -o server  $(INCLUDES) $(LIBRARIES)
	@echo "333"

client: $(OBJ_DIR)client.o $(LIBFT)
	gcc $(CFLAGS) $(OBJ_DIR)client.o -o client  $(INCLUDES) $(LIBRARIES)
	@echo "444"

$(OBJ_DIR)%o: $(SRC_DIR)%c
	gcc $(CFLAGS) -c $< -o $@ $(INCLUDES)
	@echo "555"

clean:
	(cd $(LIBFT_DIR) && make clean)
	rm -f $(OBJS)
	@echo "666"

fclean: clean
	(cd $(LIBFT_DIR) && make fclean)
	rm -f server client
	@echo "777"
	
re: fclean all
