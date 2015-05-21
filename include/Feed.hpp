#ifndef FEED_HPP
#define FEED_HPP

#include <iostream>
#include <vector>
#include <Cat.hpp>
#include <User.hpp>
#include <Shop.hpp>

class Feed
{
	Feed();
	void catEat(User &user, Cat &cat);
	void setFood(std::string setFood, Cat &cat, Shop &shop);
	int withoutFood;
	std::vector<std::string> feedBag;
	//Shop shop;
};

#endif