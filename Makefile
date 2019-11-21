# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: napoleon <napoleon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 20:55:19 by napoleon          #+#    #+#              #
#    Updated: 2019/11/21 19:38:21 by napoleon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

#		1.File manipulation | 2.String manipulation | 3.Memory manipulation | 4.Math + *toa

SRCS	= \

		part2/ft_putchar_fd.c part2/ ft_putstr_fd.c part2/ft_putendl_fd.c part2/ft_putnbr_fd.c \
		
		part2/ft_split.c part2/ft_strjoin.c part2/ft_strmapi.c part2/ft_substr.c part2/ft_strtrim.c \
		part2/ft_substr.c part1/ft_isalpha.c part1/ft_isascii.c part1/ft_isalnum.c part1/ft_isdigit.c \
		part1/ft_isprint.c part1/ft_strdup.c part1/ft_strchr.c part1/ft_strlcat.c part1/ft_strlcpy.c \
		part1/ft_strlen.c part1/ft_strncmp.c part1/ft_strnstr.c part1/ft_strrchr.c part1/ft_tolower.c \
		part1/ft_toupper.c \
		
		part1/ft_calloc.c part1/ft_memccpy.c part1/ft_memcpy.c part1/ft_memchr.c part1/ft_memcmp.c \
		part1/ft_memset.c part1/ft_memmove.c part1/ft_bzero.c \
		
		part1/ft_atoi.c part2/ft_itoa.c part1/


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