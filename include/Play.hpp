#ifndef PLAY_HPP
#define PLAY_HPP

#include <string>  
#include <iostream>

class Play
{
	Play();
	void catEntertain();
	void useToy();
	std::string uToy;
	int withoutPlay;
	int disapointFactor;
	std::vector<std::string> toyBag;
};

#endif