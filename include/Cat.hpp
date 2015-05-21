#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat
{
public:
	Cat(std::string name);
	const int getDisapoint();
	const int getHunger();
	void litter();
	
private:
	int disapointValue;
	int hungerValue;
	int litterDecay;
	int litterValue;
};

#endif