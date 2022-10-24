# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 10:50:45 by hharik            #+#    #+#              #
#    Updated: 2022/06/17 18:41:12 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra

TARGET = Account

all : $(TARGET)

$(TARGET): 
		$(CC) $(CFLAGS) main.cpp Account.cpp -o $(TARGET) 

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all