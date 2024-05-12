# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcarrico <gcarrico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 12:57:31 by gcarrico          #+#    #+#              #
#    Updated: 2024/05/12 16:59:57 by gcarrico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a


CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c  ft_strmapi.c \
			ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
			ft_strjoin.c ft_strtrim.c ft_striteri.c ft_split.c ft_itoa.c \

BONUS_FILES = 	ft_lstnew.c ft_lstadd_back.c ft_lstadd_front.c \
				ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
				ft_lstmap.c ft_lstsize.c	

COMPILER = cc

OBJ			=	$(FILES:.c=.o)
BONUS_OBJ	=	$(BONUS_FILES:.c=.o)
RM			=	rm -f

all:		$(NAME)

$(NAME):	$(OBJ)
	@ar rcs $@ $(OBJ)

$(OBJ):		$(FILES)
	$(COMPILER) -c $(FLAG) $(FILES)

clean:
	@$(RM) $(OBJ) $(BONUS_OBJ) bonus
	@echo "OBJ deleted"

fclean:		clean
	@$(RM) $(NAME)
	@echo "$(NAME) deleted"

re:			fclean all

bonus:	$(NAME) $(BONUS_OBJ)
	@ar rcs $@ $(BONUS_OBJ)

$(BONUS_OBJ):		$(BONUS_FILES)
	$(COMPILER) -c $(FLAG) $(BONUS_FILES)

.PHONY: all, clean, fclean, re, bonus