#include "Shop.hpp"

Shop::Shop()
{		
	shop.push_back("cheap eats");
	shop.push_back("normans normal chow");
	shop.push_back("feline fancy");

	shop.push_back("endless ball of yarn");
	shop.push_back("cat's meow"); 
	shop.push_back("razr keyboard");
	shop.push_back("scratching post");

	shop.push_back("self cleaning litter box");
	shop.push_back("aqua marine");	//cat
	shop.push_back("tomato");		//cat
	shop.push_back("green");		//cat
	shop.push_back("magenta");		//cat

};
void Shop::userShop(User &user)
{	
	if(user::phrase.compare("shop") == 0)
	{
		std::cout << "What do you want to steal?" << std::endl;
		printVector(shop);
		std::cout << std::endl;

		std::getline (std::cin, user::phrase);
		std::cout << std::endl;

		Play::toyBag.push_back(dump);
		shop.erase(std::find(shop.begin(), shop.end(), dump));
		printVector(shop);
		std::cout << "\nyou stole: " << dump << std::endl << std::endl;	
	}

}
void Shop::printVector(std::vector<std::string> test)
{
	for(int lolidk = 0; lolidk < test.size(); lolidk++)
	{
		std::cout << test[lolidk] << std::endl;
	}
}