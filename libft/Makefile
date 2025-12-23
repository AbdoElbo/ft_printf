# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelbouaz <aelbouaz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/07 16:20:34 by aelbouaz          #+#    #+#              #
#    Updated: 2025/12/23 14:31:38 by aelbouaz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_strlcpy.c \
	ft_strlcat.c ft_strlen.c ft_strdup.c ft_memset.c ft_memchr.c \
	ft_memcpy.c ft_memmove.c ft_memcmp.c ft_atoi.c ft_bzero.c \
	ft_toupper.c ft_tolower.c ft_calloc.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

GREEN = \033[0;32m
BLUE = \033[0;34m
RESET = \033[0m

CFLAGS := -Wall -Wextra -Werror -g
LIBFLAGS := -I .
RM := rm -f
NAME := libft.a

all: $(NAME)

MSG:
	@printf "$(GREEN)Compiling Libft$(RESET)"

$(NAME): MSG $(OBJS)
	@ar rcsUu $(NAME) $(OBJS)
	@printf "\n"

%.o: %.c
	@$(CC) $(CFLAGS) $(LIBFLAGS) -c $< -o $@
	@printf "$(GREEN).$(RESET)"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re MSG
