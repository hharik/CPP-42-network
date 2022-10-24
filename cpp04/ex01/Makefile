# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 17:41:24 by hharik            #+#    #+#              #
#    Updated: 2022/07/20 19:41:38 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS = -Wall -Werror -Wextra  -std=c++98

TARGET = Polymorphism

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp Cat.cpp Dog.cpp Animal.cpp Brain.cpp -o $(TARGET)

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all