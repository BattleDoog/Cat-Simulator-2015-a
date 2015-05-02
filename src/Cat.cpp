#include "Cat.hpp"

Cat::Cat(std::string name)
{
	hungerValue = 30;
	happinessValue = 100;
}
void hunger()
{
	hungerDecay = hungerValue - 1;	
}
void happiness()
{
	happinessDecay = happinessValue - 2;
}
void litter()
{
	litterDecay = litterValue - /*number of cat elements*/
}
