#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat
{
public:
	Cat();	
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