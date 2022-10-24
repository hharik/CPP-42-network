/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <hharik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 10:17:25 by hharik            #+#    #+#             */
/*   Updated: 2022/07/25 15:00:31 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter	*me = new Character("me");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->unequip(0);
	me->equip(tmp);

	me->unequip(2);
	IMateriaSource	*hamza_src = new MateriaSource();
	hamza_src->learnMateria(new Cure());
	ICharacter	*hamza = new Character("hamza");
	AMateria	*hamza_tmp;
	hamza_tmp = hamza_src->createMateria("cure");
	if (hamza_tmp != NULL)
		hamza->equip(hamza_tmp);
	hamza_tmp = hamza_src->createMateria("ice");
	if (hamza_tmp != NULL)
		hamza->equip(hamza_tmp);
	std::cout << "######### USE ##############" << std::endl;
	me->use(0, *hamza);
	me->use(1, *hamza);
	me->use(2, *hamza);
	hamza->use(0, *me);
	me->use(3, *hamza);
	delete hamza;
	delete me;
	delete src;
	delete hamza_src;	
	delete hamza_tmp;
	//system("leaks interface");
	return 0;
}