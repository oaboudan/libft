# NAME = libft.a
# COMPILE = gcc -Wall -Wextra -Werror

# all: $(NAME)

# $(NAME):
# 	$(COMPILE) -c *.c
# 	ar -rc $(NAME) *.o
# 	ranlib $(NAME)

# clean:
# 	rm -f *.o

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# ____________________________________________________________________________

# _*_ MakeFile _*_

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

CFLS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memmove.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c\
		ft_atoi.c ft_calloc.c  ft_strdup.c ft_substr.c
#  ft_strjoin.c	
#   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
#ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

#BCFLS =  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OCFLS = ${CFLS:.c=.o}
#OBCFLS = ${BCFLS:.c=.o}


	
all : ${NAME}

	
${NAME} : ${OCFLS}
	 ar -rc ${NAME} ${OCFLS}
	 
%.o:%.c libft.h
	gcc -c  ${FLAGS} ${CFLS} 
	 
clean :
	rm -f ${OCFLS} 

#{OBCFLS}

fclean : clean
	rm -f ${NAME}

re : fclean all