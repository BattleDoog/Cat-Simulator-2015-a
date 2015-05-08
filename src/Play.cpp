#include "Play.hpp"

Play::Play()
{
 
}
void Play::catEntertain(User &user, Cat &cat)
{
	if(user::phrase.compare("play") == 0 && cat::disapointValue < 100)
	{
		std::cout << "Choose your toy: " << std::endl;
		Play::useToy();
		std::cout << std::endl;
		std::getline(std::cin, user::phrase)
	}	
	else if(user::phrase.compare("play") == 0 && cat::disapointValue == 100)
	{
		std::cout << "Stop playing with your Cat!" << std::endl;
	}

	if(user::phrase.compare("play") != 0)
	{
		int x = withoutPlay;
		int y = cat::disapointValue;
		y = 2 ^ (x/3);

		withoutPlay++;
	}
}
void Play::useToy(std::string uToy, Cat &cat)
{
	if(toyBag.size() != 0)
	{
		Shop::printVector(toyBag);

		if(uToy.compare("endless ball of yarn") == 0)
		{
			cat::disapointValue += 2;
		}
		if (uToy.compare("scratching post") == 0)
		{
			cat::disapointValue += 3;
		}
		if(uToy.compare("razr keyboard") == 0)
		{
			cat::disapointValue += 4;
		}
		if(uToy.compare("cat's meow") == 0)
		{
			cat::disapointValue += 5;
		}
	}
	else
		std::cout << "Your cat wants some toys!" << std::endl;
}