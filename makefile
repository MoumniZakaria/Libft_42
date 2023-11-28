# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmoumni <zmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 16:05:05 by zmoumni           #+#    #+#              #
#    Updated: 2023/11/24 16:57:35 by zmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
HEADER = libft.h
FLAGS = -Wall -Wextra -Werror
SRC =   ft_strlen.c\
        ft_strlcpy.c\
        ft_split.c\
		ft_strnstr.c\
		ft_bzero.c\
		ft_strdup.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memset.c\
		ft_strchr.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlcpy.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strtrim.c\
		ft_substr.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_putchar_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_striteri.c\
		ft_strmapi.c


BSRC =	ft_lstnew_bonus.c\
		ft_lstadd_front_bonus.c\
		ft_lstsize_bonus.c\
		ft_lstlast_bonus.c\
		ft_lstadd_back_bonus.c\
		ft_lstdelone_bonus.c\
		ft_lstclear_bonus.c\
		ft_lstiter_bonus.c\
		ft_lstmap_bonus.c

OBJ = ${SRC:.c=.o}
BOBJ = ${BSRC:.c=.o}


all: ${NAME}

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

%.o : %.c $(HEADER)
	${CC} ${FLAGS} -c $<

bonus : $(BOBJ)
	ar rc ${NAME} ${BOBJ}

clean :
	rm -f ${OBJ}
	rm -f ${BOBJ}

re: fclean all

fclean : clean
	rm -f ${NAME}
	
.PHONY: all clean fclean re