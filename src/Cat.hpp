#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>

class Cat
{
public:
	Cat();	
	void hunger();
	void happiness();
	void litter();
	std::string name;
private:
	int happinessValue;
	int happinessDecay;
	
	int hungerValue;
	int hungerDecay;
	
	int litterDecay;
	int litterValue;
};

#endif