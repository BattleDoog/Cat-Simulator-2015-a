#include "Shop.hpp"

Shop::Shop()
{		
	std::string dump;
	std::cout << "What do you want to steal?" << std::endl << dump << std::endl;

	std::cout << "FOOD" << std::endl;

	shop.push_back("cheap eats");
	shop.push_back("normans normal chow");
	shop.push_back("feline fancy");

	std::cout << "TOYS" << std::endl;

	shop.push_back("endless ball of yarn");
	shop.push_back("cat's meow"); 
	shop.push_back("razr Keyboard");
	shop.push_back("scratching post");

	std::cout << "MISC." << std::endl;

	shop.push_back("self cleaning litter box");
	shop.push_back("tomato");	//cat
	shop.push_back("green");	//cat
	shop.push_back("magenta");	//cat
	shop.push_back("aqua marine");	//cat

	printVector(shop);
	std::cout << std::endl;
	std::getline (std::cin, dump);
	std::cout << std::endl;

	std::copy(shop.begin(), shop.end(), dump)
	shop.erase(std::find(shop.begin(), shop.end(), dump));
	printVector(shop);
	std::cout << "\nyou stole: " << dump << std::endl << std::endl;	
};

void Shop::printVector(std::vector<std::string> test)
{
	for(int lolidk = 0; lolidk < test.size(); lolidk++)
	{
		std::cout << test[lolidk] << std::endl;
	}
}