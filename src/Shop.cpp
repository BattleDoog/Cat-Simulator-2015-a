#include "Shop.hpp"

Shop::Shop()
{		
	foodShop.push_back("cheap eats");
	foodShop.push_back("normans normal chow");
	foodShop.push_back("feline fancy");

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
int shopPrices(User &user)
{
	if(user::phrase.compare("cheap eats") == 0 && user::walletAmount <= 2.25)
	{
		
	}
}
void Shop::userShop(User &user)
{	
	if(user::phrase.compare("shop") == 0)
	{
		std::cout << "What do you want to steal?" << std::endl;
		printVector(shop);
		std::cout << std::endl;
		printVector(foodShop);
		std::cout << std::endl;

		std::getline (std::cin, user::phrase);
		std::cout << std::endl;

		//check to see if something from the shop vector is called
		Play::toyBag.push_back(user::phrase);
		shop.erase(std::find(shop.begin(), shop.end(), user::phrase)); //will exclude foods
		printVector(shop);
		
		std::cout << "\nyou stole: " << user::phrase << std::endl << std::endl;	
	}

}
void Shop::printVector(std::vector<std::string> test)
{
	for(int lolidk = 0; lolidk < test.size(); lolidk++)
	{
		std::cout << test[lolidk] << std::endl;
	}
}