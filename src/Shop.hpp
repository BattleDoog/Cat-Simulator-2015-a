#ifndef SHOP_HPP
#define SHOP_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Shop
{
	Shop();
	void printVector();
	void userShop();
	int shopPrices();
	std::vector<std::string> shop;
	std::vector<std::string> foodShop;
};

#endif