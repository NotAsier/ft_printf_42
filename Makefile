# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarranz- <aarranz-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 10:19:53 by aarranz-          #+#    #+#              #
#    Updated: 2023/07/13 11:54:14 by aarranz-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME            =   libftprintf.a
CC              =   gcc
CFLAGS          =   -Wall -Wextra -Werror
AR              =   ar
ARFLAGS         =   rcs
RM              =   rm -rf
SRC             =   ft_printf ft_printf_hex ft_printf_ptr ft_printf_putunbr_fd ft_printf_utils
SRCS            =   $(addsuffix .c, $(SRC))
OBJ_DIR         =   obj
OBJS            =   $(SRCS:%.c=$(OBJ_DIR)/%.o)
LIBFT_PATH      =   ./libft
LIBFT           =   $(LIBFT_PATH)/libft.a
$(OBJ_DIR)/%.o:     %.c
					$(CC) $(CFLAGS) -c $< -o $@
all:                $(NAME)
$(NAME):            $(LIBFT) $(OBJ_DIR) $(OBJS)
					cp  $(LIBFT) $(NAME)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS)
$(LIBFT):
					make -C $(LIBFT_PATH) all
$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)
clean:
					make -C $(LIBFT_PATH) clean
					$(RM) $(OBJ_DIR)
fclean:             clean
					make -C $(LIBFT_PATH) fclean
					$(RM) $(NAME)
re:                 fclean all
.PHONY:             all clean fclean re libft