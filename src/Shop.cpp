#include "Shop.hpp"

Shop::Shop()
{		
	foodShop.push_back("cheap eats");
	foodShop.push_back("normans normal chow");
	foodShop.push_back("feline fancy");

	shop.push_back("endless ball of yarn");
	shop.push_back("cat's meow"); 
	shop.push_back("razer keyboard");
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
		std::cout << "What are you buyin'?" << std::endl;
		printVector(shop);
		std::cout << std::endl;
		printVector(foodShop);
		std::cout << std::endl;

		std::getline (std::cin, user::phrase);
		std::cout << std::endl;

		//check to see if something from the shop vector is called
		Shop::checkout()
		printVector(shop);
		
		std::cout << "\nyou bought: " << user::phrase << std::endl << std::endl;	
	}

}
void checkout(std::string bItems, User &user, Play &play, Feed &feed) //add misc items
{
	if(bItems.compare("cheap eats") == 0 && user::walletAmount <= 2.25)
	{
		feed::feedbag.push_back("cheap eats");
		user::walletAmount -= 2.25;
	}
	if(bItems.compare("normans normal chow") == 0 && user::walletAmount <= 3.50)
	{
		feed::feedbag.push_back("normans normal chow");
		user::walletAmount -= 3.50;
	}
	if(bItems.compare("feline fancy") == 0 && user::walletAmount <= 4.75)
	{
		feed::feedbag.push_back("feline fancy");
		user::walletAmount -= 4.75;
	}

	if(bItems.compare("endless ball of yarn") == 0 && user::walletAmount <= 10)
	{
		play::toyBag.push_back("endless ball of yarn");
		user::walletAmount -= 10;
		shop.erase(std::find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("scratching post") == 0 && user::walletAmount <= 24)
	{
		play::toyBag.push_back("scratching post");
		user::walletAmount -= 24;
		shop.erase(std::find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("cats meow") == 0 && user::walletAmount <= 32)
	{
		play::toyBag.push_back("cats meow");
		user::walletAmount -= 32;
		shop.erase(std::find(shop.begin(), shop.end(), bItems));
	}
	if(bItems.compare("razer keyboard") == 0 && user::walletAmount <= 49)
	{
		play::toyBag.push_back("razer keyboard");
		user::walletAmount -= 49;
		shop.erase(std::find(shop.begin(), shop.end(), user::phrase));
	}
	else
		std::cout << "We don't serve your kind here!" << std::endl;
}
void Shop::printVector(std::vector<std::string> test)
{
	for(int lolidk = 0; lolidk < test.size(); lolidk++)
	{
		std::cout << test[lolidk] << std::endl;
	}
}