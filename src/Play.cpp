#include "Play.hpp"

Play::Play()
{
 
}
void Play::catEntertain()
{
	if(User::phrase.compare("play") == 0 && disapointValue < 100)
	{
		std::cout << "Choose your toy: " << std::endl;
		Shop::printVector(toyBag);
		std::cout << std::endl;
		std::getline(std::cin, User::phrase);

		//based on toy, a value will be added to happiness

	}	
	else if(User::phrase.compare("play") == 0 && disapointValue == 100)
	{
		std::cout <<"Stop playing with your Cat!" << std::endl;
	}

	if(User::phrase.compare("play") != 0)
	{
		int x = withoutPlay;
		int y = disapointValue;
		y = 2 ^ (x/3);

		withoutPlay++;
	}
}
