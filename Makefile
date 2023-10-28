# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 21:00:35 by ana-cast          #+#    #+#              #
#    Updated: 2023/10/19 03:57:11 by ana-cast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


################################################################################
##                               COMPILATION INFO                             ##
################################################################################

NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

################################################################################
##                              SOURCES AND OBJECTS                           ##
################################################################################

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
	ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
	ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
	ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
	
OBJECTS = $(SRCS:.c=.o)

BONUS_SR = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
	ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c \
	ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstmap_bonus.c
	
BONUS_OB = $(BONUS_SR:.c=.o)

################################################################################
##                                    COLOURS                                 ##
################################################################################

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_YELLOW= \033[33m
COLOUR_MAGENTA=\033[35m
COLOUR_TURQUOISE=\033[36m	
COLOUR_END=\033[0m


################################################################################
##                                     RULES                                  ##
################################################################################

all : head $(NAME)

head : 
	@echo "$(COLOUR_MAGENTA)"
	@echo "   _  _  _       __  _     "
	@echo "  | |(_)| |     / _|| |    "
	@echo "  | | _ | |__  | |_ | |_   "
	@echo "  | || || '_ \ |  _|| __|  "
	@echo "  | || || |_) || |  | |_   "
	@echo "  |_||_||_.__/ |_|   \__|  "
	@echo "                           "
	@echo "        42MLG: by ana-cast \n"
	@echo "Proyect: \033[36m libft $(COLOUR_MAGENTA)"
	@echo "Commands:\033[36m all bonus clean fclean re rebonus $(COLOUR_END)\n"

bon_head :
	@printf "$(COLOUR_MAGENTA)"
	@echo "      ___               ___  B       ___       ___     "
	@echo "     /\__\   ___       /\  \   O    /\  \  N  /\  \    "
	@echo "    /:/  /  /\  \     /::\  \      /::\  \    \:\  \   "
	@echo "   /:/  /   \:\  \   /:/\:\  \    /:/\:\  \    \:\  \  "
	@echo "  /:/  /    /::\__\ /::\~\:\__\  /::\~\:\  \   /::\  \ "
	@echo " /:/__/  __/:/\/__//:/\:\ \:|__|/:/\:\ \:\__\ /:/\:\__\\"
	@echo " \:\  \ /\/:/  /   \:\~\:\/:/  /\/__\:\ \/__//:/  \/__/"
	@echo "  \:\  \\::/__/     \:\ \::/  /      \:\__\ /:/  /     "
	@echo "   \:\  \\:\__\   U  \:\/:/  /        \/__/ \/__/      "
	@echo "    \:\__\\/__/       \::/__/                          "
	@echo "     \/__/          S  ~~        42MLG: by ana-cast \n"
	@echo "                                 "
	@echo "Proyect: \033[36m libft BONUS$(COLOUR_MAGENTA)"
	@echo "Commands:\033[36m all bonus clean fclean re rebonus $(COLOUR_END)\n"

$(NAME) : $(OBJECTS)
	@printf "\n ⏱  Creating $(NAME)"
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "$(COLOUR_GREEN)\r  ✓   Created  $(NAME) $(COLOUR_END)\n"

bonus : bon_head $(OBJECTS) $(BONUS_OB)
	@printf "\n  🤑  Creating BONUS $(NAME)"
	@ar rc $(NAME) $(OBJECTS) $(BONUS_OB)
	@ranlib $(NAME)
	@echo "$(COLOUR_GREEN)\r  ✓  Created  BONUS $(NAME) $(COLOUR_END)\n"

%.o : %.c
	@printf " ⏱  $(COLOUR_END)Compiling $@"
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(COLOUR_GREEN)\r  ✓   Compiled  $@ $(COLOUR_END)"

clean :
	@printf "\n$(COLOUR_YELLOW) 🗑   Removing objects$(COLOUR_END)"
	@$(RM) $(OBJECTS) $(BONUS_OB)
	@echo "$(COLOUR_GREEN)\r  ✓  $(COLOUR_RED)Removed  objects $(COLOUR_END)"

fclean: clean
	@printf "$(COLOUR_YELLOW) 🗑   Removing $(NAME)$(COLOUR_END)"
	@$(RM) $(NAME)
	@echo "$(COLOUR_GREEN)\r  ✓  $(COLOUR_RED)Removed  $(NAME) $(COLOUR_END)\n"

re :
	@$(MAKE) fclean
	@clear
	@$(MAKE) all

rebonus :
	@$(MAKE) fclean
	@clear
	@$(MAKE) bonus

.PHONY: all bonus clean fclean re rebonus