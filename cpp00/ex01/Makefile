# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/06 10:50:45 by hharik            #+#    #+#              #
#    Updated: 2022/06/18 20:06:21 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra

TARGET = Phone_book

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp contact_class.cpp PhoneBook_class.cpp -o $(TARGET) 

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all