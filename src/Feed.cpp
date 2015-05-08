#include "Feed.hpp"

Feed::Feed()
{
	
}
void Feed::catEat(User &user, Cat &cat)
{
	if(user::phrase.compare("feed") == 0 && cat::hungerValue < 30)
	{
		std::cout << "select your cat's meal" << std::endl;
		Feed::setFood();
		std::cout << std::endl;
		std::getline(std::cin, user::phrase)
	}
	else if(user::phrase.compare("feed") == 0 && cat::hungerValue == 30)
		std::cout << "Stop trying to blow up your cat!" << std::endl;

	if(user::phrase.compare("play") != 0)
	{
		int x = withoutFood;
		int y = cat::hungerValue;
		y = 2 ^ (x/3);

		withoutFood++;
	}
}
void Feed::setFood(std::string setFood, Cat &cat, Shop &shop)
{
	if(feedBag.size() != 0)
	{
		shop.printVector(feedBag);

		if(setFood.compare("cheap eats") == 0)
		{
			cat::hungerValue += 2;
			//reduce use by one
			withoutFood = 0;
		}
		if(setFood.compare("normans normal chow") == 0)
		{
			cat::hungerValue += 3;
			//reduce use by one
			withoutFood = 0;
		}
		if(setFood.compare("feline fancy") == 0)
		{
			cat::hungerValue += 4;
			//reduce use by one
			withoutFood = 0;
		}
	}
	else
		std::cout << "Get your cat some food!" << std::endl;
}