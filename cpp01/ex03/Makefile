# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 13:26:32 by hharik            #+#    #+#              #
#    Updated: 2022/07/16 16:36:29 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS =  -Wall -Werror -Wextra -std=c++98

TARGET = Weapon

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) HumanA.cpp Weapon.cpp Humanb.cpp main.cpp -o $(TARGET) 

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all