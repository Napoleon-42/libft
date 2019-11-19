# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 20:55:19 by napoleon          #+#    #+#              #
#    Updated: 2019/11/08 11:52:34 by napoleon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

S_PATH	= ./

SRCS	= ft_atoi.c ft_isdigit.c ft_memcpy.c ft_strlcpy.c \
ft_strrchr.c ft_bzero.c ft_isprint.c ft_memmove.c ft_strlen.c ft_tolower.c \
ft_isalnum.c ft_memccpy.c ft_memset.c ft_strncmp.c ft_toupper.c ft_isalpha.c \
ft_memchr.c ft_strchr.c ft_isascii.c ft_memcmp.c ft_strlcat.c ft_strnstr.c

RM		= rm -fr

CC		= gcc

all:		${NAME}

${NAME}:	${OBJS}
				ar rc ${NAME} ${OBJS}

clean:		
				${RM} ${OBJS}
				
fclean:		 clean
				${RM} ${NAME}
				
re:			fclean all

so:			${OBJS}
			gcc -shared -o libft.so ${OBJS}