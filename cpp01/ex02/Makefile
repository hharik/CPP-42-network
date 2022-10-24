# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/16 13:26:32 by hharik            #+#    #+#              #
#    Updated: 2022/07/16 15:22:21 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS = -Wall -Werror -Wextra -std=c++98

TARGET = Demystify

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp  -o $(TARGET) 

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all