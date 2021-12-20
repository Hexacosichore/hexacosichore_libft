# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchanet <gchanet@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 16:32:21 by gchanet           #+#    #+#              #
#    Updated: 2021/12/12 17:14:58 by gchanet          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

BBLU 		=	\033[1;34m
BGREEN		=	\033[1;32m
BRED		=	\033[1;31m
BLU 		=	\033[0;34m
GRN 		=	\033[0;32m
RED 		=	\033[0;31m
RST 		=	\033[0m

SRC_ARR		=	ft_arrlen.c \
				ft_arrtostr.c \
				ft_arrcontain.c \
				ft_arrdel.c
SRC_COM		=	ft_atoi.c \
				ft_split.c \
				ft_itoa.c \
				ft_toupper.c \
				ft_tolower.c
SRC_DEBUG	=	ft_debug.c
SRC_FD		=	get_next_line.c
SRC_IS		=	ft_isprint.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isspace.c
SRC_LST		=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_lsttoarr.c
SRC_MEM		=	ft_bzero.c \
				ft_realloc.c \
				ft_memalloc.c \
				ft_calloc.c \
				ft_memdel.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c
SRC_PRINTF	=	ft_printf_all.c \
				ft_printf.c
SRC_PUT		=	ft_putstrstyle_fd.c \
				ft_putaddress_fd.c \
				ft_putarr_fd.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstrstyle.c \
				ft_putaddress.c \
				ft_putarr.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putendl.c \
				ft_putnbr.c
SRC_STR		=	ft_strcpy.c \
				ft_strndup.c \
				ft_strreplace.c \
				ft_stristr.c \
				ft_strisspace.c \
				ft_strlen.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strdup.c \
				ft_strichr.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_strdupcat.c \
				ft_strdel.c \
				ft_strdelc.c \
				ft_strcountc.c \
				ft_strisspace.c
				
OBJ			= 	${addprefix funcs_arr/, 	${SRC_ARR:.c=.o}} \
				${addprefix funcs_common/, 	${SRC_COM:.c=.o}} \
				${addprefix funcs_debug/, 	${SRC_DEBUG:.c=.o}} \
				${addprefix funcs_fd/, 		${SRC_FD:.c=.o}} \
				${addprefix funcs_is/, 		${SRC_IS:.c=.o}} \
				${addprefix funcs_lst/, 	${SRC_LST:.c=.o}} \
				${addprefix funcs_mem/, 	${SRC_MEM:.c=.o}} \
				${addprefix funcs_printf/, 	${SRC_PRINTF:.c=.o}} \
				${addprefix funcs_put/, 	${SRC_PUT:.c=.o}} \
				${addprefix funcs_str/, 	${SRC_STR:.c=.o}}
				
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
HEADER_FONT	=	font.h
HEADER_FT	=	libft.h
NAME		=	libft.a

all: ${NAME}

print_header:
	@echo "\033[1;34m\033[23G _     _ _    ______ _   "
	@echo "\033[1;34m\033[23G| |   (_) |   |  ___| |  "
	@echo "\033[1;34m\033[23G| |    _| |__ | |_  | |_ "
	@echo "\033[1;34m\033[23G| |   | | '_ \|  _| | __|"
	@echo "\033[1;34m\033[23G| |___| | |_) | |   | |_ "
	@echo "\033[1;34m\033[23G\_____/_|_.__/\_|    \__|\n"


%.o: %.c ${HEADER_FT} ${HEADER_FONT}
	@${CC} ${CFLAGS} -c $< -o $@
	@echo "${BBLU}[${NAME} OBJ] :${RST} $@ ${BGREEN}\033[70G[✔]${RST}"

${NAME}: print_header ${OBJ}
	@ar rcs ${NAME} ${OBJ}
	@echo "${BGREEN}[${NAME} END] :${RST}${RST} ./${NAME} ${BGREEN}\033[70G[✔]${RST}"

clean:
	@rm -f ${OBJ}
	@echo "${RED}[${NAME} CLEAN]  :${RST} Deleting objects...${BGREEN}\033[70G[✔]${RST}"

fclean: clean
	@rm -f ${NAME}
	@rm -f ${OBJ}
	@echo "${RED}[${NAME} FCLEAN] :${RST} Deleting library...${BGREEN}\033[70G[✔]${RST}"

re: fclean all

.PHONY: clean fclean all re