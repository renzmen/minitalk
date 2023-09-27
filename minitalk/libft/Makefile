# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/07 16:07:59 by lrenzett          #+#    #+#              #
#    Updated: 2023/09/20 02:39:05 by lrenzett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############
## Variables ##
###############
NAME		= libft.a
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
INCLUDES	= -I./includes/
SRC_DIR		= ./src/
OBJ_DIR		= ./obj/
SRC_FILES   = ft_isdigit.c ft_strjoin.c ft_strtrim.c ft_isprint.c ft_memset.c \
ft_putchar_fd.c ft_strlcat.c ft_substr.c ft_atoi.c ft_itoa.c ft_putendl_fd.c \
ft_strlcpy.c ft_tolower.c ft_bzero.c ft_putnbr_fd.c ft_strlen.c ft_memcpy.c \
ft_toupper.c ft_calloc.c ft_memchr.c ft_putstr_fd.c ft_strmapi.c ft_isalnum.c \
ft_memcmp.c ft_split.c ft_strncmp.c ft_isalpha.c ft_strchr.c ft_memmove.c \
ft_strnstr.c ft_isascii.c ft_strdup.c ft_strrchr.c ft_striteri.c ft_printf.c ft_printf_utilities.c \
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c 
OBJ_FILES	= $(SRC_FILES:.c=.o)
SRCS		= $(addprefix $(SRC_DIR), $(SRC_FILES))   
OBJS		= $(addprefix $(OBJ_DIR), $(OBJ_FILES))

#############
## Targets ##
#############
all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)

$(OBJ_DIR)%o: $(SRC_DIR)%c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

usage:
	@echo "Usage: make [usage | all | clean | fclean | re]"
	@echo
	@echo "-- Usage --"
	@echo "\tusage: displays this message"
	@echo
	@echo "-- Library build targets --"
	@echo "\tall: compile the library"
	@echo "\tclean: remove object files"
	@echo "\tfclean: remove object files and library"
	@echo "\tre: fclean and all"
	
