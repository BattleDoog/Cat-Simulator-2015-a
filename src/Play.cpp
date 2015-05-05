#include "Play.hpp"

Play::Play()
{

}
void Play::catEntertain()
{
	if(phrase == "play" && disapointValue < 100)
	{
		std::cout << "Choose your toy: " << std::endl;
		std::getline(std::cin, phrase);

		//based on toy, a value will be added to happiness

		int x = withoutPlay;
		int y;
		y = 2 ^ (x/3); //is this the incrementaion? what's the purpose?
	}	
	else if(phrase == "play" && disapointValue == 100)
	{
		std::cout <<  "Stop playing with your Cat!" std::endl;
	}

	withoutPlay++;
}
