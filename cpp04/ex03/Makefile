# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 17:41:24 by hharik            #+#    #+#              #
#    Updated: 2022/07/25 10:43:46 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS = -Wall -Werror -Wextra  -std=c++98

TARGET = interface

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp -o $(TARGET)

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all