/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aricholm <aricholm@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 13:35:19 by aricholm          #+#    #+#             */
/*   Updated: 2022/09/04 14:21:12 by aricholm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>
#include <time.h>

class Base { public: virtual ~Base() {} };
class A : public Base { public: A() { std::cout << "A constructor\n"; } };
class B : public Base { public: B() { std::cout << "B constructor\n"; } };
class C : public Base { public: C() { std::cout << "C constructor\n"; } };


Base*	generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}
	return NULL;
}

void	identify(Base* p)
{
	std::cout << "Pointer identify: ";
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	std::cout << "Reference identify: ";
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e) { }

	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::exception& e) { }
	
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::exception& e) { }
}

int main()
{
	{
		std::cout << "Pointer:" << std::endl;
		Base*	pointer = generate();
		identify(pointer);
		delete pointer;
	}
	{
		std::cout << "Reference:" << std::endl;
		Base&	reference = *generate();
		identify(reference);
		delete &reference;
	}
	return 0;
}

