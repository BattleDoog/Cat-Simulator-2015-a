#include "Cat.hpp"
#include "Work.hpp"
#include "User.hpp"
#include "Play.hpp"


int main()
{
	//Cat cat(tomato)
	std::getline (std::cin, phrase);
	for(int i = 0; i < phrase.size(); i++)
	{
		phrase[i] = tolower(phrase[i]);
	}

}