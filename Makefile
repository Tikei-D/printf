# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tel-dana <tel-dana@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/16 14:58:54 by tel-dana          #+#    #+#              #
#    Updated: 2022/05/26 17:20:17 by tel-dana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        =  libftprintf.a

CC          =  gcc
FLAGS       =  -Wall -Werror -Wextra
RM          =  rm -rf

SRCS        =  ft_printf.c ft_functions.c ft_puthex.c ft_print_format.c			\
			   

OBJS        =  ft_printf.o ft_functions.o ft_puthex.o ft_print_format.o			\
			   
				    
# Targets
all: $(NAME)

$(NAME): $(OBJS)

	@ar crs $(NAME) $(OBJS)

$(OBJS) : $(SRCS)
	$(CC) $(FLAGS) -c $(SRCS)

# Removes objects
clean:
	@$(RM) $(OBJS)

# Removes objects and executable
fclean: clean
	@$(RM) $(NAME)

# Removes objects and executable then remakes all
re: fclean all
