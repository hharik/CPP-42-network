# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hharik <hharik@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/19 17:41:24 by hharik            #+#    #+#              #
#    Updated: 2022/07/24 21:21:32 by hharik           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = c++ 
CFLAGS = -Wall -Werror -Wextra  -std=c++98

TARGET = Intern

all : $(TARGET)

$(TARGET):
		$(CC) $(CFLAGS) main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp -o $(TARGET)

clean :
	rm $(TARGET)
fclean :
	rm -f $(TARGET)
re : fclean all