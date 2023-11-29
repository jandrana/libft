# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ana-cast <ana-cast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 21:00:35 by ana-cast          #+#    #+#              #
#    Updated: 2023/11/29 20:40:27 by ana-cast         ###   ########.fr        #
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

CC_SRCS = original_functions/character_classification/ft_isascii.c \
	original_functions/character_classification/ft_isdigit.c \
	original_functions/character_classification/ft_isprint.c \
	original_functions/character_classification/ft_isalnum.c \
	original_functions/character_classification/ft_isalpha.c

CC2_SRCS = original_functions/case_conversion/ft_tolower.c \
	original_functions/case_conversion/ft_toupper.c

MM_SRCS = original_functions/memory_manipulation/ft_bzero.c \
	original_functions/memory_manipulation/ft_calloc.c \
	original_functions/memory_manipulation/ft_memcmp.c \
	original_functions/memory_manipulation/ft_memcpy.c \
	original_functions/memory_manipulation/ft_memmove.c \
	original_functions/memory_manipulation/ft_memset.c \
	original_functions/memory_manipulation/ft_memchr.c

SM_SRCS = original_functions/string_manipulation/ft_atoi.c \
	original_functions/string_manipulation/ft_strlcat.c \
	original_functions/string_manipulation/ft_strlcpy.c \
	original_functions/string_manipulation/ft_strlen.c

SS_SRCS = original_functions/string_search/ft_strchr.c \
	original_functions/string_search/ft_strncmp.c \
	original_functions/string_search/ft_strnstr.c \
	original_functions/string_search/ft_strrchr.c

A_SRCS = additional_functions/ft_itoa.c \
	additional_functions/ft_split.c \
	additional_functions/ft_strdup.c \
	additional_functions/ft_striteri.c \
	additional_functions/ft_strjoin.c \
	additional_functions/ft_strmapi.c \
	additional_functions/ft_strtrim.c \
	additional_functions/ft_substr.c

AO_SRCS = additional_functions/output_functions/ft_putchar_fd.c \
	additional_functions/output_functions/ft_putendl_fd.c \
	additional_functions/output_functions/ft_putnbr_fd.c \
	additional_functions/output_functions/ft_putstr_fd.c
	
CC_OBJECTS = $(CC_SRCS:.c=.o)
CC2_OBJECTS = $(CC2_SRCS:.c=.o)
MM_OBJECTS = $(MM_SRCS:.c=.o)
SM_OBJECTS = $(SM_SRCS:.c=.o)
SS_OBJECTS = $(SS_SRCS:.c=.o)
A_OBJECTS = $(A_SRCS:.c=.o)
AO_OBJECTS = $(AO_SRCS:.c=.o)

OBJECTS = $(CC_OBJECTS) $(CC2_OBJECTS) $(MM_OBJECTS) $(SM_OBJECTS) $(SS_OBJECTS) $(A_OBJECTS) $(AO_OBJECTS)

BONUS_SR = bonus_functions/ft_lstadd_back_bonus.c \
	bonus_functions/ft_lstadd_front_bonus.c \
	bonus_functions/ft_lstclear_bonus.c \
	bonus_functions/ft_lstdelone_bonus.c \
	bonus_functions/ft_lstiter_bonus.c \
	bonus_functions/ft_lstlast_bonus.c \
	bonus_functions/ft_lstnew_bonus.c \
	bonus_functions/ft_lstsize_bonus.c \
	bonus_functions/ft_lstmap_bonus.c
	
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