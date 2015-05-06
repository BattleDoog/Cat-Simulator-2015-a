#ifndef PLAY_HPP
#define PLAY_HPP

#include <string>  
#include <iostream>

class Play
{
	Play();
	void catEntertain();
	void printToyBag();
	int withoutPlay; 
	std::vector<std::string> toyBag;
};

#endif