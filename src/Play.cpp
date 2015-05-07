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

		if()

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
void Play::useToy(std::string uToy)
{
	if(toyBag.size() != 0)
	{
		if(uToy.compare("endless ball of yarn") == 0)
		{
			disapointValue += 2;
		}
		if (uToy.compare("scratching post") == 0)
		{
			disapointValue += 3;
		}
		if(uToy.compare("razr keyboard") == 0)
		{
			disapointValue += 4;
		}
		if(uToy.compare("cat's meow") == 0)
		{
			disapointValue += 5;
		}
	}
	else
		std::cout << "Your cat wants some toys!" << std::endl;

}