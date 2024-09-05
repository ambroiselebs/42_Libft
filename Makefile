CC			= cc
CFLAGS		= -Wall -Wextra -Werror
NAME		= libft.a
INCFOLDER	= /
SRCFOLDER	= /
SRCS		= ft_isalpha.c ft_toupper.c ft_isdigit.c ft_tolower.c ft_isalnum.c \
				ft_isascii.c ft_strchr.c ft_strrchr.c ft_isprint.c \
				ft_strncmp.c ft_strlen.c ft_memchr.c ft_memset.c \
				ft_memcmp.c ft_bzero.c
OBJS		= $(SRCS:.c=.o)

all: ${NAME}

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			ar -rsc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${NAME}

re: fclean all
