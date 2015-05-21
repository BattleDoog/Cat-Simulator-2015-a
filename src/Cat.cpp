 #include <Cat.hpp>

Cat::Cat(std::string name)
{
	hungerValue = 30;
	disapointValue = 100;
}
const int Cat::getDisapoint()
{
	return disapointValue;
}
const int Cat::getHunger()
{
	return hungerValue;
}
void Cat::litter()
{
	litterDecay = litterValue - /*number of cat elements*/0;
}
