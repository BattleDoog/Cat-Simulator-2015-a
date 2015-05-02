#include "Play.hpp"

Play::Play()
{

}
void Play::catEntertain()
{
	if(phrase == "play" && happinessValue < 100)
	{
		std::cout << "Choose your toy: " << std::endl;
		std::getline(std::cin, phrase);
	}	
	else if(phrase == "play" && happinessValue = 100)
	{
		std::cout <<  "Stop playing with your Cat!" std::endl;
	}
}