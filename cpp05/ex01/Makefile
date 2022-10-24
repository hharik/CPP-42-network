# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 17:41:24 by hharik            #+#    #+#              #
#    Updated: 2022/07/23 11:59:06 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS = -Wall -Werror -Wextra  -std=c++98

TARGET = Form

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp Bureaucrat.cpp Form.cpp  -o $(TARGET)

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all