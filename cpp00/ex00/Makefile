# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 10:50:45 by hharik            #+#    #+#              #
#    Updated: 2022/06/19 11:13:58 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++ 
CFLAGS = -Wall -Wextra -Werror

TARGET = megaphone

all : $(TARGET)

$(TARGET): 
		$(CC) $(CFLAGS) -o $(TARGET) megaphone.cpp

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all