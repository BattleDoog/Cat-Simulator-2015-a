#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat
{
public:
	Cat();
	const int getDisapoint();
	const int getHunger();
	void litter();
	int eDecay();
	std::string name;
	
private:
	int disapointValue;
	int hungerValue;
	int litterDecay;
	int litterValue;
};

#endif