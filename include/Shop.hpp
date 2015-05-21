#ifndef SHOP_HPP
#define SHOP_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct allItems
{
	std::string itemName;
	int price;
};
class Shop
{
public:
	Shop();
	void printVector(std::vector<std::string> test);
	void userShop();
	void checkout();
	//std::vector<std::string> shop;
	std::vector<allItems> namePrice;
};
#endif