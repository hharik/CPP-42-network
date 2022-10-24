/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:51:30 by hharik            #+#    #+#             */
/*   Updated: 2022/07/27 10:10:46 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : Form("SHRUBBERYCREATIONFORM", 145, 137),  target(_target) 
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other)
{
	this->target = other.target;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &other)
{
	this->target = other.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bure) const
{
	checkRequements(bure);
	std::ofstream	outfile;
	outfile.open(this->target + "_shrubbery");
	outfile << "         - - -" << std::endl;
	outfile << "       -        -  -     --    -" << std::endl;
	outfile << "    -                 -         -  -" << std::endl;
	outfile << "                    -" << std::endl;
	outfile << "                   -                --" << std::endl;
	outfile << "   -          -            -              -" << std::endl;
	outfile << "   -            '-,        -               -" << std::endl;
	outfile << "   -              'b      *" << std::endl;
	outfile << "    -              '$    #-                --" << std::endl;
	outfile << "   -    -           $:   #:               -" << std::endl;
	outfile << " --      -  --      *#  @):        -   - -" << std::endl;
	outfile << "              -     :@,@):   ,-**:'   -" << std::endl;
	outfile << "  -      -,         :@@*: --**'      -   -" << std::endl;
	outfile << "           '#o-    -:(@'-@*'  -" << std::endl;
	outfile << "   -  -       'bq,--:,@@*'   ,*      -  -" << std::endl;
	outfile << "              ,p$q8,:@)'  -p*'      -" << std::endl;
	outfile << "       -     '  - '@@Pp@@*'    -  -" << std::endl;
	outfile << "        -  - --    Y7'.'     -  -" << std::endl;
	outfile << "                  :@):." << std::endl;
	outfile << "                 .:@:'." << std::endl;
	outfile << "                 .:@:'." << std::endl;
	outfile << "               .::(@:. " << std::endl;
	outfile.close();
}