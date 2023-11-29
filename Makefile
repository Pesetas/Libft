# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antramir <antramir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 11:06:31 by antramir          #+#    #+#              #
#    Updated: 2023/05/31 14:42:25 by antramir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a 
NAME_BONUS 	= libft.a
SRCS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
			ft_isprint.c ft_strlen.c ft_memset.c ft_toupper.c ft_tolower.c \
			ft_strchr.c ft_strrchr.c ft_strncmp.c ft_bzero.c ft_memchr.c \
			ft_memcpy.c ft_memmove.c ft_memcmp.c ft_strlcpy.c ft_strnstr.c \
			ft_strlcat.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
			ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
			ft_putnbr_fd.c ft_strcmp.c

BONUS_SRCS	= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			  ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			  ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS		= ${SRCS:.c=.o}

BONUS_OBJS	 = ${BONUS_SRCS:.c=.o}

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror


${NAME}:	
			${CC} -c ${CFLAGS} ${SRCS} 
			ar cr ${NAME} ${OBJS}


all:		${NAME}

clean:		
			${RM} ${OBJS} ${BONUS_OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

bonus:		${OBJS} ${BONUS_OBJS}
			ar cr ${NAME} ${OBJS} ${BONUS_OBJS}

.PHONY:		all clean fclean re
