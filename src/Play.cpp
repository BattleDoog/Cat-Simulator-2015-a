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

		int x = withoutPlay;
		int y;
		y = 2 ^ (x/3);
	}	
	else if(phrase == "play" && disapointValue = 100)
	{
		std::cout <<  "Stop playing with your Cat!" std::endl;
	}

	withoutPlay++;
}
