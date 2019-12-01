# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnelson <lnelson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/07 20:55:19 by napoleon          #+#    #+#              #
#    Updated: 2019/11/29 19:25:06 by lnelson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	= libft.a

BONUS_	=	${SRCS_PATH}/ft_lstlast.c ${SRCS_PATH}/ft_lstadd_front.c ${SRCS_PATH}/ft_lstnew.c ${SRCS_PATH}/ft_lstsize.c \
			${SRCS_PATH}/ft_lstadd_back.c ${SRCS_PATH}/ft_lstdelone.c ${SRCS_PATH}/ft_lstclear.c ${SRCS_PATH}/ft_lstiter.c \
			${SRCS_PATH}/ft_lstmap.c

BONUS_OBJS	= ${BONUS_:.c=.o}

SRCS_PATH	= .

OBJS_PATH	= ./obj/

OBJS	= ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

#		1.File manipulation | 2.String manipulation | 3.Memory manipulation | 4.Math + *toa

SRCS	= ${SRCS_PATH}/ft_putchar_fd.c ${SRCS_PATH}/ft_putstr_fd.c ${SRCS_PATH}/ft_putendl_fd.c ${SRCS_PATH}/ft_putnbr_fd.c \
		\
		${SRCS_PATH}/ft_split.c ${SRCS_PATH}/ft_strjoin.c ${SRCS_PATH}/ft_strmapi.c ${SRCS_PATH}/ft_substr.c ${SRCS_PATH}/ft_strtrim.c \
		${SRCS_PATH}/ft_isalpha.c ${SRCS_PATH}/ft_isascii.c ${SRCS_PATH}/ft_isalnum.c ${SRCS_PATH}/ft_isdigit.c ${SRCS_PATH}/ft_strlen.c\
		${SRCS_PATH}/ft_isprint.c ${SRCS_PATH}/ft_strdup.c ${SRCS_PATH}/ft_strchr.c ${SRCS_PATH}/ft_strlcat.c ${SRCS_PATH}/ft_strlcpy.c \
		${SRCS_PATH}/ft_strncmp.c ${SRCS_PATH}/ft_strnstr.c ${SRCS_PATH}/ft_strrchr.c ${SRCS_PATH}/ft_tolower.c ${SRCS_PATH}/ft_toupper.c\
		\
		${SRCS_PATH}/ft_calloc.c ${SRCS_PATH}/ft_memccpy.c ${SRCS_PATH}/ft_memcpy.c ${SRCS_PATH}/ft_memchr.c ${SRCS_PATH}/ft_memcmp.c \
		${SRCS_PATH}/ft_memset.c ${SRCS_PATH}/ft_memmove.c ${SRCS_PATH}/ft_bzero.c \
		\
		${SRCS_PATH}/ft_atoi.c ${SRCS_PATH}/ft_itoa.c


RM		= rm -fr

CC		= gcc

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o} 
			
all:		${NAME}

${NAME}:	libft.h ${OBJS}
				ar rc ${NAME} ${OBJS}
				ranlib ${NAME}

clean:		
				${RM} ${OBJS} ${BONUS_OBJS}
				
fclean:		 clean
				${RM} ${NAME} ${BONUS_OBJS}
				
re:			fclean all

bonus:		${BONUS_OBJS} ${OBJS}
				ar rc ${NAME} ${OBJS} ${BONUS_OBJS}

so:			${OBJS}
			gcc -shared -o libft.so ${OBJS}

my:			${NAME} clean